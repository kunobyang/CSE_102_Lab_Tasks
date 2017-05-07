#include<stdio.h>
#include<string.h>
char in[1007];
int ct[26];
/*
 ct[0] counts the frequency of 'a'
 ct[1] counts the frequency of 'b'
 ct[2] counts the frequency of 'c'  etc.
*/

int main(void)
{
    int i, j, n, x;
    scanf("%s", in);
    n = strlen(in);
    for (i = 0; i < n; i++) {
        ct[in[i]-'a']++;
    }
    // the original string should have same frequency for all present characters to be 'valid'
    x = ct[in[0]-'a'];
    for (i = 0; i < 26; i++) {
        if (ct[i]) {
            if (ct[i]!=x) break;
        }
    }
    if (i==26) {
        // every frequency of the present distinct characters is same
        // no removal needed
        printf("YES\n");
    }
    else {
        for (j = 0; j < n; j++) {
            // checking if we remove in[j] the string becomes 'valid'
            
            ct[in[j]-'a']--;
            // removig in[j] causes it's frequency lessen by one
            x = ct[in[(j+1)%n]-'a'];
            // we have to set the value of x to the frequency of any character
            // other than in[j]. Why??
            
            for (i = 0; i < 26; i++) {
                if (ct[i]) {
                    if (ct[i]!=x) break;
                }
            }

            if (i==26) {
                // one removal needed
                printf("YES\n");
                break;
            }
            ct[in[j]-'a']++;
            // adding in[j] again
        }
        if (j==n) printf("NO\n");
    }

    return 0;
}

/*
Some corner case to check your solution's validity:
abc
aaabbbc
d
*/

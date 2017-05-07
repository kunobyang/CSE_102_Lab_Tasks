#include<stdio.h>
#include<string.h>
char in[1007];
int ct[1007];

int main(void)
{
    int i, j, n, mn, rm, x;
    scanf("%s", in);
    n = strlen(in);
    for (i = 0; i < n; i++) {
        ct[in[i]-'a']++;
        x = ct[in[i]-'a'];
    }
    for (i = 0; i < 26; i++) {
        if (ct[i]) {
            if (ct[i]!=x) break;
        }
    }
    if (i==26) {
        // no removal needed
        printf("YES\n");
    }
    else {
        for (j = 0; j < n; j++) {
            ct[in[j]-'a']--;
            x = ct[in[(j+1)%n]-'a'];

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
        }
        if (j==n) printf("NO\n");
    }

    return 0;
}

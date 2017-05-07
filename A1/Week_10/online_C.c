#include<stdio.h>
#include<string.h>

int main(void)
{
    int n1, n2, i, j, k, l, n, id;
    char x[1000], y[1000];
    printf("Input X: ");
    gets(x);
    printf("Input Y: ");
    gets(y);

    n1 = strlen(x);
    n2 = strlen(y);

    int flg = 0;
    // flg is kept to check if a subtring is found
    for (i = n1; i; i--) {
        // varaible i fixes the length of the expected substring
        // now we have to fix the startpoints of string x and y
        // from which we shall check the next i characters
        
        for (j = 0; j+i-1 < n1; j++) {
            // j fixes the index of the string x
            for (k = 0; k+i-1 < n2; k++) {
                // k fixes the index of the string y
                
                for (l = 0; l < i; l++) {
                    if (x[j+l]!=y[k+l]) break;
                }
                
                if (l==i) {
                    // the subtring is found
                    // it's length is i
                    // it starts from the j'th index of string x
                    flg = 1;
                    n = i;
                    id = j;
                    break;
                }
                
            }
            if (flg) break;
            // if a substring is already found there is no need to 
            // keep the loop going since we are asked only the largest substring
        }
        if (flg) break;
    }

    if (flg) {
        printf("The longest common substring is \"");
        for (i = 0; i < n; i++) printf("%c", x[id+i]);
        printf("\" and is of length %d.\n", n);
    }
    else {
        printf("No match found.\n");
    }

    return 0;
}

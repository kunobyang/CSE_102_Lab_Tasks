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

    for (i = n1; i; i--) {
        for (j = 0; j+i-1 < n1; j++) {
            for (k = 0; k+i-1 < n2; k++) {
                for (l = 0; l < i; l++) {
                    if (x[j+l]!=y[k+l]) break;
                }
                if (l==i) {
                    flg = 1;
                    n = i;
                    id = j;
                    break;
                }
            }
            if (flg) break;
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

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[1000], s2[1000];
    int i, j, n1, n2;
    gets(s1);
    gets(s2);

    n1 = strlen(s1);
    n2 = strlen(s2);

    for (i = 0; i+n2-1 < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (*(s1+i+j)!=*(s2+n2-1-j)) break;
        }
        if (j==n2) printf("%d ", i);
    }


    return 0;
}

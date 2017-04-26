#include<stdio.h>

int LIM=100;

int strlen (char *s)
{
    int res=0;
    while (*s!='\0')
    {
        res++;
        s++;
    }
    return res;
}

void strcpy (char *old, char *nw)
{
    int len=strlen(old);
    int i;
    for (i=0; i<=len; i++)
    {
        *nw=*old;
        nw++;
        old++;
    }
}

int main()
{
    char s1[LIM];
    char s2[LIM];

    printf("Enter string 1: ");
    gets(s1);
    strcpy(s1, s2);

    printf("String copied. New string is ");
    puts(s2);
}

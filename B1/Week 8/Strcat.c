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

void strcat (char *s1, char *s2)
{
    int len1=strlen(s1);
    int len2=strlen(s2);

    int i;
    for (i=0; i<len1; i++)
        s1++;

    for (i=0; i<=len2; i++)
    {
        *s1=*s2;
        s1++;
        s2++;
    }
}

int main()
{
    char s1[LIM];
    char s2[LIM];

    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);

    printf("Strings concatenated. New string is ");
    strcat(s1, s2);
    puts(s1);
}

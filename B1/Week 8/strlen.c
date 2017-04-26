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

int main()
{
    char s1[LIM];
    char s2[LIM];

    printf("Enter string: ");
    gets(s1);
    printf("The length of the string is %d", strlen(s1));
}

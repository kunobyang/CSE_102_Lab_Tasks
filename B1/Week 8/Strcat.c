/*
  Write a function that takes two strings s1 and s2 and concatenates
  or appends s2 to the end of s1.
*/


#include<stdio.h>

int LIM=100;

int strlen (char *s)
{
    int res=0;      //This saves the length
    
    /*At each step we check if the current pointer points to a null
      character. If so, we stop. else it is valid character. So, we
      increment res. We also increment pointer s so that it points 
      to the next character. The loop continues until we hit a null
      character and adds 1 for each valid character. At the end we 
      have the length of s in res. */
    while (*s!='\0')
    {
        res++;
        s++;
    }
    return res;
}

void strcat (char *s1, char *s2)
{
    int len1=strlen(s1);        //Calculate lengths of both strings
    int len2=strlen(s2);

    int i;
    
    /* This loop is to get the pointer to point to the end of the 
       strings. This could have been done much easier by s1=s1+len1
       but guess who said you can't do that? */
    
    for (i=0; i<len1; i++)      
        s1++;
    
    /* s1 now points to the end of the string. Now we apply a similar 
       logic to strcpy. We cpoy the current char and increment both 
       pointers to the point to the next ones. */
    
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

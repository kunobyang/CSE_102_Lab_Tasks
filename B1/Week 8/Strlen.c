#include<stdio.h>

int LIM=100;        //Maximum number of chars (buffer)

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

int main()
{
    char s1[LIM];
    char s2[LIM];

    printf("Enter string: ");
    gets(s1);
    printf("The length of the string is %d", strlen(s1));
}

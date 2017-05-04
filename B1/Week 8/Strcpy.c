
#include<stdio.h>

int LIM=100;

int strlen (char *s)
{
    int res=0;          //This saves the length

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

void strcpy (char *old, char *nw)
{
    int len=strlen(old);        //length of old string
    int i;

    /* At each step, we copy the valued pointed by pointer old to
       pointer new. In other words, we copy the current character.
       Then we increment both pointer to point to the next characters. */

    for (i=0; i<=len; i++)
    {
        *nw=*old;
        nw++;
        old++;
    }

    /*
        Note that we use i<=len instead of i<len. This means we copy len+1
        characters, ie. one extra character. This is to copy the ending '\n'
        to the new strings as well. This could also have been done out of
        the loop.
    */
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

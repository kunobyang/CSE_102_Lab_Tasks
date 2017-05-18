#include<stdio.h>
#include<stdlib.h>
int strlen (char *s)
{
    int res=0;      //This saves the length
    while (*s!='\0')
    {
        res++;
        s++;
    }
    return res;
}

int strcpy (char *old, char *nw)
{
    int len=0;
    while (*old!='\0')
    {
        *nw=*old;
        nw++;
        old++;
        len++;
    }
    *nw='\0';
    return len;
}

char* strstr (char *str1, char* str2)
{
    int len=strlen(str1);
    int i;
    for (i=0; i<len; i++)
    {
        char*t1=str1;
        char*t2=str2;

        int match=1;
        while (*t1!='\0' && *t2!='\0')
        {
            if (*t1!=*t2)
            {
                match=0;
                break;
            }
            t1++;
            t2++;
        }
        if (match)  return str1;
        str1++;
    }
    return NULL;
}

char * replace (char * sent, char * pat, char * rep)
{
    int len=strlen(sent);
    int lenp=strlen(pat);
    int lenr=strlen(rep);

    int hits=0;
    char * tmp=sent;

    while (1)
    {
        tmp=strstr(tmp, pat);
        if (tmp==NULL) break;
        hits++;
        tmp+=lenp;
    }

    char * ans= (char *) malloc(sizeof(char)*(len+hits*(lenr-lenp)+1));
    char * anst=ans;

    char * cur=sent;
    while (1)
    {
        char * next = strstr(cur, pat);
        char* i;
        if (next==NULL)     break;
        for (i=cur; i<next; i++)
        {
            *anst=*i;
            anst++;
        }
        for (i =rep; *i!=0; i++)
        {
            *anst=*i;
            anst++;
        }
        cur=next+lenp;
    }
    while (*cur!=0)
    {
        *anst=*cur;
        anst++;
        cur++;
    }
    *anst=0;
    return ans;
}

int main()
{
    char sentence[100], pat[100], rep[100];

    printf("Enter Sentence: ");
    gets(sentence);

    printf("Enter string to replace: ");
    gets(pat);

    printf("Enter string to replace with: ");
    gets(rep);

    printf("After replacement: ");
    puts(replace(sentence,pat,rep));
}

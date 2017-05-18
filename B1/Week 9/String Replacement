/*
    Write a program that takes a sentence and replaces each ocurrence of a given 
    substring with a replacement string.
    
    Example:
    String:      This is sparta.
    Substring:   is
    Replacement: was
    
    Result:      Thwas was sparta.
*/


#include<stdio.h>
#include<stdlib.h>

// functions strle, strcpy, strstr are used from previous online.

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

/* This is the function that does the replacement. Sent is full string,
   pat is the substring to look for and rep the replacement string.
   
   For example: replace("This is sparta", "is", "was") would return
                "Thwas was sparta"
*/

char * replace (char * sent, char * pat, char * rep)
{
    int len=strlen(sent);   //Get the length of each string
    int lenp=strlen(pat);
    int lenr=strlen(rep);

    int hits=0;             //Number of times pat occurs in sent.
    char * tmp=sent;        //used to calculate the length of the return string

    while (1)
    {
        tmp=strstr(tmp, pat);   //Find the next occurence of pat
        if (tmp==NULL) break;   //If there is none, then break
        hits++;                 //otherwise, we have a new match. 
        tmp+=lenp;              //And we go to the end of the current match.
    }

/*
    We must find out the size of the new string. Each occurrence of pat
    has been replaced by rep. So, the size will chance by the number of 
    matches mutiplied by the differnce of length between these two strings.
    We must also add a extra character for the ending null character, '/0'.
    
    We are going to construct a new string ans from sent by replacing all 
    occurrences of pat by rep.
*/
    
    char * ans= (char *) malloc(sizeof(char)*(len+hits*(lenr-lenp)+1));
    char * anst=ans;
    char * cur=sent;

    while (1)
    {
        char * next = strstr(cur, pat);     //Find the next occurrence of pat in sent.
        char* i;
        if (next==NULL)     break;          //Is there is no matches left, break
  
        //The letters in between the current starting position and the start of the next
        //match are copied one by one and appended to ans. 
        for (i=cur; i<next; i++)            
        {
            *anst=*i;
            anst++;
        }
        
        //Now, we copy the letters of rep one by one to ans.
        for (i =rep; *i!=0; i++)
        {
            *anst=*i;
            anst++;
        }
        //We mustn't copy the letters of pat, so we skip them and advance ahead
        cur=next+lenp;
    }
    
    //copy any leftover letters from sent.
    while (*cur!=0)
    {
        *anst=*cur;
        anst++;
        cur++;
    }
    
    *anst='/0';     //append a null char at end
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

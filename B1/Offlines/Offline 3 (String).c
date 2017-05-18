#include<stdio.h>
#include<stdlib.h>
int LIM=100;

int   strlen (char *s);a
int   strcpy (char *old, char *nw)a;
int   strcat (char *str1, char *str2);
int   strcmp (char *str1, char *str2);
char* strlwr (char *str);
char* strupr (char *str);
char* strchr (char *str, char c);
char* strstr (char *str1, char* str2);
char* strrstr(char *str1, char* str2);
int   strrev (char *str1);
int menu ();
void process (int option);

int main()
{
    int option=1;
    while (option!=0)
    {
        system("cls");
        option=menu();

        if (option<0 || option > 10)
        {
            printf("Invalid Input. Please try again.");
            getch();
        }

        else if (option==0)
            break;

        else
            process(option);
    }
    return 0;
}

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

int strcat (char *s1, char *s2)
{
    int len=0;
    while (*s1!='\0')
        s1++,
        len++;

    while (*s2!='\0')
    {
        *s1=*s2;
        s1++;
        s2++;
        len++;
    }
    *s1='\0';
    return len;
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

int strcmp (char *s1, char *s2)
{
    while (*s1!='\0' || *s2!='\0')
    {
        if (*s1<*s2)    return -1;
        if (*s1>*s2)    return 1;
        s1++;
        s2++;
    }
    return 0;
}
char* strupr (char *str)
{
    int len=strlen(str);
    char *res=malloc(len+1);
    char *temp=res;

    while (*str!='\0')
    {
        if ('a'<=*str && *str<='z')
            *temp=*str-'a'+'A';
        else
            *temp=*str;
        temp++;
        str++;
    }
    *temp='\0';
    return res;
}

char* strlwr (char *str)
{
    int len=strlen(str);
    char *res=malloc(len+1);
    char *temp=res;

    while (*str!='\0')
    {
        if ('A'<=*str && *str<='Z')
            *temp=*str-'A'+'a';
        else
            *temp=*str;
        temp++;
        str++;
    }
    *temp='\0';
    return res;
}

char* strchr (char *str, char c)
{
    while (*str!='\0')
    {
        if (*str==c)    break;
        str++;
    }

    return str;
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
        if (match)  break;
        str1++;
    }
    return str1;
}

char* strrstr (char *str1, char* str2)
{
    int len=strlen(str1);
    char * end=str1+len;
    char * cur=end-1;
    int i;

    for (i=0; i<len; i++)
    {
        char*t1=cur;
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
        if (match)
            return cur;
        cur--;

    }
    return end;
}

int strrev (char *str1)
{
    int len=strlen(str1);
    char* end=str1+len-1;
    char* start=str1;

    while (start<end)
    {
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    return len;
}

int menu()
{
    int n;
    printf("Choose: \n");
    printf("\t 1 for finding the length of a string\n");
    printf("\t 2 for copying a string\n");
    printf("\t 3 for concatenating two strings\n");
    printf("\t 4 for comparing two strings\n");
    printf("\t 5 for converting a string to lowercase\n");
    printf("\t 6 for converting a string to uppercase\n");
    printf("\t 7 for finding a character in a string\n");
    printf("\t 8 for finding first occurrence of a string in another string\n");
    printf("\t 9 for finding last occurrence of a string in another string\n");
    printf("\t10 for reversing a string\n");
    printf("\t 0 for exiting program\n");
    printf("\nEnter you choice: ");
    scanf("%d", &n);
    getchar();
    return n;
}

void process(int option)
{
    printf("\n");
    char s1[LIM];
    char s2[LIM];
    int len;
    char * p;
    char c;

    switch (option)
    {
    case 1:
            printf("Enter string: ");
            gets(s1);
            len=strlen(s1);
            printf("The length of the string is %d.\n", len);
            break;

    case 2:
            printf("Enter string to copy: ");
            gets(s1);
            len=strcpy(s1,s2);
            printf("\nString copied.\nThe new string is: ");
            puts(s2);
            //printf("The length of the new string is %d.\n", len);
            break;

    case 3:
            printf("Enter first string: ");
            gets(s1);
            printf("Enter second string: ");
            gets(s2);
            len=strcat(s1,s2);
            printf("Concatenated string is: ");
            puts(s1);
            //printf("The length of string is %d.\n", len);
            break;

    case 4:
            printf("Enter first string: ");
            gets(s1);
            printf("Enter second string: ");
            gets(s2);
            int comp=strcmp(s1,s2);
            if (comp<0)
                printf("First string is lexicographically smaller than second string.");
            else if (comp>0)
                printf("First string is lexicographically greater than second string.");
            else
                printf("Both strings are same.");
            break;

        case 5:
            printf("Enter string: ");
            gets(s1);
            char* lw=strlwr(s1);
            printf("String converted to lowercase is: ");
            puts(lw);
            break;

        case 6:
            printf("Enter string: ");
            gets(s1);
            char* up=strupr(s1);
            printf("String converted to uppercase is: ");
            puts(up);
            break;

        case 7:
            printf("Enter string: ");
            gets(s1);
            printf("Enter char: ");
            scanf("%c", &c);
            p = strchr(s1,c);
            if (*p=='\0')
                printf("Character not found in string.");
            else
                printf("Character found at position %d", p-s1+1);
            break;

        case 8:
            printf("Enter first string: ");
            gets(s1);
            printf("Enter second string: ");
            gets(s2);
            p = strstr(s1,s2);
            if (*p=='\0')
                printf("Second string not found in first string.");
            else
                printf("Second string found at position %d", p-s1+1);
            break;

        case 9:
            printf("Enter first string: ");
            gets(s1);
            printf("Enter second string: ");
            gets(s2);
            p = strrstr(s1,s2);
            if (*p=='\0')
                printf("Second string not found in first string.");
            else
                printf("Second string found at position %d", p-s1+1);
            break;

        case 10:
            printf("Enter string: ");
            gets(s1);
            len=strrev(s1);
            printf("Reversed string is: ");
            puts(s1);
            break;

    default:
            printf("Invalid.");
    }
    printf("\n\nPress any key to return to menu.");
    getch();
}

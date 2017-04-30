/*
    @author: Zunaed Karim Sifat (1605113)

    PROBLEM DESCRIPTION:

        From a given string s, you will have to remove all the occurrences of a given character, ch
        using a function squeeze(char s1[], char ch)
*/

#include <stdio.h>
#include <string.h>

void squeeze(char string[], char ch)
{
    // i = index of the character in the new string
    // i+j = index of the character in old string that should be stored in i-th position of the new string
    int len = strlen(string), i, j;

    for (i = 0, j = 0; i+j <= len; i++)
    {
        // if (i+j)th element is same as ch, I can't have it in the new string. So, I am going forward UNTIL I find something else
        while (string[i+j] == ch)
            ++j;

        string[i] = string[i+j];
    }
}

int main()
{
    char string[100], ch;
    gets(string);
    scanf("%c", &ch);

    squeeze(string, ch);
    puts(string);

    return 0;
}

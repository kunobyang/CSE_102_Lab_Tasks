/*
    PROBLEM DESCRIPTION:

        For a given string, print how many words, letters, vowels, consonants & symbols that string contains.
        You can assume that there is a space between every two consecutive words.

    SOLUTION:

        We have used a loop to check all the elements in the strings, and for each character incremented the
        counter variable for this character's group and finally printed the counters.
*/
#include <stdio.h>

int main()
{
    char string[1000];
    int letter = 0, vowel = 0, consonant = 0, symbol = 0, spaces = 0, i;
    gets(string);

    for (i = 0; string[i]; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            string[i] += ('a'-'A');

        if (string[i] >= 'a' && string[i] <= 'z')
        {
            ++letter;

            if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
                ++vowel;
            else
                ++consonant;
        }
        else if (string[i] == ' ')
            ++spaces;
        else
            ++symbol;
    }

    printf("Letters: %d\nVowels: %d\nConsonant: %d\nSymbol: %d\nWords: %d\n", letter, vowel, consonant, symbol, spaces+1);

    return 0;
}

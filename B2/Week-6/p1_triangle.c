/*****
* @author : Zunaed Karim Sifat
* @date   : April 2, 2017
*
* PROBLEM DESCRIPTION:
* --------------------
*   In this problem you have to print a triangle as follow
*
*   A
*   BC
*   DEF
*   GHIJ
*   ***** (n such lines for input n, (here n = 4)
*   when you have printed Z once, you shall again start from A and so on)
*
* SOLUTION:
* ---------
* As you can see there will be i letters in the i-th line.
* So in the first line I'll print A ( = 0 + 'A')
* In the second line I'll print BC ( = 1 + 'A' and 2 + 'A' respectively)
* In the second line I'll print DEF ( = 3 + 'A', 4 + 'A' and 5 + 'A' respectively)
*
* Bingo! Found the pattern! Haven't you?
*
* But hei! How will I repeat the letters? How can I get A after Z?
* That means I will have to print (0 + 'A') after (25 + 'A'). But I'll get 26 after 25, right?
*
* Wait! 25 % 26 = 25 and 26 % 26 = 0, right? So instead of adding the counter variable (named index in the code) with 'A',
* I shall add the variable mod 26 (counter % 26).
*
* Let's write the code now :) Happy coding!
*
*/

#include <stdio.h>

int main()
{
    int n, index = 0, i, j;                             // n = input, index = the counter variable & i, j for running loop
    scanf("%d", &n);                                    // taking input

    for (i = 1; i <= n; i++)                            // the loop will run n times to print n lines
    {
        for (j = 0; j < i; j++, index++)                // I will have to print i letters in line i
            printf("%c", 'A' + index % 26);             // printing the letters as explained earlier
        printf("\n");                                   // line printed, so move to the next line.
    }

    return 0;                                           // Done!
}

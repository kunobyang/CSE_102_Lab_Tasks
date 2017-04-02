/*******************
* @author: Zunaed Karim Sifat
* @date  : April 2, 2017
*
* PROBLEM:
* --------
*       Twin primes are pairs of primes which differ by two. The first twin primes are {3,5}, {5,7}, {11,13} and {17,19}
*       You will given two integers, low and high, and have to print all the twin primes in the range (inclusively)
*
* SOLUTION:
* ---------
*       From the smallest odd number, n, such that n >= low, we shall start checking whether n and (n+2) is prime.
*       If both of them are, we shall print them. Otherwise we shall ignore them.
*
*       We shall check upto n = high-2 as if the second number (n+2) has also to fit in the range [low, high]
*       If we check till n = high, (n+2) will leave the range.
*/

#include <stdio.h>

int main()
{
    int low, high, i, j, k, l;
    scanf("%d %d", &low, &high);
    
    // If low is an even number, we take the next odd number, as even numbers cannot have any twin prime
    if (low % 2 == 0)
        low++;
    
    // We check from low to (high - 2) and each time increase by 2 as we can easily ignore the even numbers
    for (i = low; i <= high-2; i += 2)
    {
        // checking primality for i
        for (k = 2; k < i; k++)
            if (i % k == 0)
                break;

        for (l = 2; l < i+2; l++)
            if ((i+2) % l == 0)
                break;
        
        // If both i and i+2 are primes, then k == i, l == i+2. If so, we have to print them.
        if (k == i && i+2 == l)
            printf("%d %d\n", i, i+2);
    }

    return 0;
}

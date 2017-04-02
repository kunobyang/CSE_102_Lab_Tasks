/*
    Problem 2:
    Print all prime numbers from 1 to an integer n. n will be provided as a keyboard input.
    The user must be prompted to give an input.

    You cannot use arrays.

    However, you may use function.


*/



#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    /*
        is_prime() takes a positive integer greater
        than 2 as input And return 1 if it is a prime
        and 0 otherwise.
    */

    int flag = 1;

    double d = sqrt(n);

    int i;

    /*
        If a number, n has factor greater than sqrt(n) [that is not n itself],
        then the number must also have a factor smaller than or equal to sqrt(n) [that is not 1].
        So checking if a number has any factors (other than 1) up to sqrt(n) is sufficient to
        deduce whether it will be prime.
    */

    for(i=2;i<=d;i++)
    {
        if(n%i == 0)
        {
            flag = 0;
            break;
        }

    }

    return flag;
}

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n<= 0) printf("BAD INPUT. -_-");

    else if(n==1) printf("There are no primes between 1 and 1. 1 is not a prime number."); // 1 is not a prime number.

    else
    {
        int i;
        printf("The prime numbers from 1 to %d are : ",n);
        for(i = 2;i<=n;i++) //runs a loop from i = 2 to i = n
        {
            if(is_prime(i)) printf("%d ",i); //prints i if it is a prime number
        }
    }

    return 0;
}

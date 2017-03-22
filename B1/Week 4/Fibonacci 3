/*
    Problem Statement:
    Re-write problem 2. This time instead of printing the value from main(), print it from the fibonacci() function itself.
*/

#include<stdio.h>

void fibonacci(int n); //changed the return type to void

int main()
{
    int n;

    printf("Enter a non-negative integer as input : ");
    scanf("%d",&n);

    fibonacci(n); 

    return 0;
}


void fibonacci(int n)
{
    int i;

    int f1 = 1;
    int f2 = 1;
    int term = 1;

    for(i=3;i<=n;i++)
    {
        term = f1+f2;
        f1=f2;
        f2=term;
    }

    printf("Fibonacci_%d = %d",n,term); // printing here instead
}


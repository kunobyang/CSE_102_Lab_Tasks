/*
    Problem Statement:
    Write a function that takes an integer as argument and returns The nth Fibonacci number.
    Then take a positive integer as input from main() and print the answer.
    Prompt the user to give input.
*/

#include<stdio.h>

int fibonacci(int n)
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



    return(term);
}

int main()
{
    int n,f;

    printf("Enter a non-negative integer as input : ");
    scanf("%d",&n);

    f = fibonacci(n);

    printf("Fibonacci_%d = %d",n,f);

    return 0;
}




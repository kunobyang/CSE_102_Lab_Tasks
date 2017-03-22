/*
    Problem Statement:
    Re-write problem 1. This time write the fibonacci function below the main() function. Use a prototype.
*/

#include<stdio.h>

int fibonacci(int n); //function prototype

int main()
{
    int n,f;

    printf("Enter a non-negative integer as input : ");
    scanf("%d",&n);

    f = fibonacci(n);

    printf("Fibonacci_%d = %d",n,f);

    return 0;
}


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


/*
    Problem Statement:
    Write a function that takes an integer as argument and returns The factorial n.
    Then take an non-negative integer as input from main() and print the answer.
    Prompt the user to give input.
*/

#include<stdio.h>

unsigned long long factorial(int n);// function prototype

//Using unsigned long long instead of int because integers would have had overflow for all input greater than 12

int main()
{
    int n;
    unsigned long long answer;

    printf("Enter a non-negative integer : ");
    scanf("%d",&n);

    answer = factorial(n);

    printf("%d! = %llu",n,answer);

    return 0;
}


unsigned long long factorial(int n)
{
    int val = 1;

    int i;
    for(i=1;i<=n;i++)
    {
        val*=i;
    }

    return(val);

}

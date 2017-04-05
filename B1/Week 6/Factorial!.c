
#include<stdio.h>


unsigned long long int factorial(unsigned int n)
{
    if(!n) return 1;
    return n*factorial(n-1);
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%d! = %llu",n,factorial(n));

    return 0;
}

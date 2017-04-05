#include<stdio.h>

unsigned long long int fibonacci(unsigned int n)
{
    if(n == 1) return 1;
    if(n == 2) return 1;

    return fibonacci(n-1) + fibonacci(n-2);

}





int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("Fibonacci_%d = %llu",n,fibonacci(n));



    return 0;
}

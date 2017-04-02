#include<stdio.h>
/*
Write a function that takes n as input and returns factorial of n. The function should be recursive.
The recursive formula: factorial(n) = { 1                   for n = 1
                                      { n * factorial(n-1)  for n > 1
*/

int fact(int n)
{
    if (n==1) return 1;
    return n*fact(n-1);
}


int main(void)
{
    int n, factorial;
    printf("Please input n: ");
    scanf("%d", &n);

    factorial = fact(n);

    printf("%d! = %d\n", n, factorial);

    return 0;
}

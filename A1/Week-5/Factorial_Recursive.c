#include<stdio.h>

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

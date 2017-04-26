#include<stdio.h>

int main()
{
    int a, b, i;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    int prod=0;

    for (i=0; i<32; i++)
    {
        if (b&(1<<i))
            prod+=(a<<i);
    }
    printf("The product is %d", prod);
}

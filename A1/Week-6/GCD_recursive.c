#include<stdio.h>

int gcdFunction (int a, int b)
{
    if (a%b==0) return b;
    return gcdFunction(b, a%b);
}


int main(void)
{
    int a, b, c, gcd;
    printf("Input first number: ");
    scanf("%d", &a);
    printf("Input second number: ");
    scanf("%d", &b);

    if (a < b) {
        c = a;
        a = b;
        b = c;
    }

    // ^ we don't really need the swap part

    gcd = gcdFunction(a, b);

    printf("GCD of %d and %d is %d\n", a, b, gcd);

    return 0;
}

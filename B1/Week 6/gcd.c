#include<stdio.h>

int gcd(int a, int b)
{
    if(a<b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    if(!b) return a;

    return gcd(b,a%b);
}

int main()
{
    int a,b;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);

    printf("gcd(%d,%d) = %d",a,b,gcd(a,b));
}

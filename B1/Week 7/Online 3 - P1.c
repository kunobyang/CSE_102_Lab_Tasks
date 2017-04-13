/*
Add Problem description here
*/

double power (double x, int n)
{
    if (n<0)    return 1/power(x,-n);
    if (n==0)   return 1;
    if (n%2==1)    return x*power(x, n-1);
    double k=power(x, n/2);
    return k*k;
}

int main()
{
    double x;
    int n;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%lf", power(x, n));
}


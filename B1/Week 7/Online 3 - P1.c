/*
You are given a number x and an integer n. You have to write a recursive
function that calculates x^n (x to the power of n). Your function must be
based on the parity of n. 

Ask the user for the values of x and n. then find the value of x^n using your
function, then output it.
*/


/*
This is our recursive function power.The key idea is 
if n is even, we can calculate x^n as the square of x^(n/2). 
Example: x^10 = x^5 * x^5

If n is odd, we just calculate x^(n-1) and multiply it by x. 
Example: x^7 = x * x^6

Also for negative value of n, we just invert x^-n.
Example: x^-9 = 1 / x^9
*/

double power (double x, int n)
{
    if (n<0)    return 1/power(x,-n);
    if (n==0)   return 1;
    if (n%2==1)    return x*power(x, n-1);
    double k=power(x, n/2);
    return k*k;
}


/* just boring io*/
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


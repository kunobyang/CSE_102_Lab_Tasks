///problem 2
 
#include <stdio.h>
 
int main ()
{
    int lcm,a,b,i;
 
    scanf ("%d %d",&a,&b);
 
    for (i=1;i<=a;i++) {
        lcm=b*i;
        if (lcm%a==0) break;
    }
 
    printf ("%d\n",lcm);
    return 0;
}
 
/*
    lcm=a*b;
 
    while (b>0) {
        t=b;
        b=a%b;
        a=t;
    }
 
    lcm/=a;
*/

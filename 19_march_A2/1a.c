
//problem 1-a

#include <stdio.h>

int main ()
{
    int i,fact=1,n,x,flag=-1,exp=1;
    double ans=0;

    scanf ("%d %d",&x,&n);
    for (i=0;i<n;) {
        ans+=((exp*1.0)/(fact*1.0))*flag*-1;
        fact*=++i;
        exp*=x;
        flag*=-1;
    }
    printf ("%lf\n",ans);

    return 0;
}


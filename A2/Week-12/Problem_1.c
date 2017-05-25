/*
Problem_1 coded by Saifullah Talukder
Statement: Write a program to calculate the value of PI.
*/

#include <stdio.h>
#include <stdlib.h>

struct point {
    double x,y;
};

struct circle {
    struct point o;
    double r;
};

int inSide (struct point p,struct circle c)
{
    double r,R;
    r=c.r*c.r;
    R=(p.x-c.o.x)*(p.x-c.o.x)+(p.y-c.o.y)*(p.y-c.o.y);

    if (R>r) return 0;
    else return 1;
}

int main ()
{
    int r,i,n,cnt=0;
    double x,y,PI;
    struct circle C;
    struct point P,O;

    C.r=C.o.x=C.o.y=0.5;
    srand(time(NULL)); ///to generate random number based on time
    n=1000000;

    for (i=0;i<n;i++) {
        r=rand(); ///generates random number
        x=(r*1.0)/RAND_MAX;
        r=rand();
        y=(r*1.0)/RAND_MAX;
        P.x=x;
        P.y=y;
        cnt+=inSide(P,C);
    }

    PI=(cnt*1.0*4.0)/(n*1.0);
    printf ("Value of PI=%lf\n",PI);

    return 0;
}

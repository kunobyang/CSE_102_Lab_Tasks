///problem 5
 
#include <stdio.h>
 
int main ()
{
    int i,n,f1,f2,next;
 
    scanf ("%d",&n);
    f1=f2=1;
    while (f2<n) {
        next=f1+f2;
        f1=f2;
        f2=next;
    }
    if (f2==n) printf ("Yes\n");
    else printf ("No\n");
 
    return 0;
}

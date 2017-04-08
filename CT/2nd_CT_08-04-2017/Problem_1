/*
Problem 1 coded by Saifullah Talukder

Statement: Write a code segment to check if an array is sorted or not. If it is sorted in ascending order print "SORTED IN ASCENDING".
If it is sorted in descending order print "SORTED IN DESCENDING". If it is not sorted then print "UNSORTED".

Note: The problem tells us to just write the particular segment to do the checking. Here I wrote the whole code. It also does not tell us
what to do if all the elements in an array are equal. Here I printed "ALL NUMBERS ARE EQUAL" (though I did not do that in the exam).
Once the exam papers are given to us we will know the exact solution. Fully correct solution will be uploaded then.
*/


#include <stdio.h>

int main ()
{
    int i,j,N;
    scanf ("%d",&N);
    int ara[N];
    for (i=0;i<N;i++) scanf ("%d",&ara[i]);

    i=1;
    while (ara[i]==ara[0]) {
        i++;
        if (i==N) break;
    }

    if (i==N) printf ("ALL NUMBERS ARE EQUAL");
    else if (ara[i]>ara[0]) {
        for (j=1;j<N;j++) if (ara[j]<ara[j-1]) break;
        if (j==N) printf ("SORTED IN ASCENDING");
        else printf ("UNSORTED");
    }
    else if (ara[i]<ara[0]) {
        for (j=1;j<N;j++) if (ara[j]>ara[j-1]) break;
        if (j==N) printf ("SORTED IN DESCENDING");
        else printf ("UNSORTED");
    }

    return 0;
}

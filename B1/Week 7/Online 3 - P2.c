/*
Add Problem description here
*/

#include<stdio.h>

int main()
{
    int n,i,j, temp;
    printf("n = ");
    scanf("%d", &n);
    printf("array: ");

    int a[n];
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);

    int max=0;
    for (i=0; i<n; i++)
        if (max<a[i])
        max=a[i];

    int freq[max+1];
    int num[max+1];

    for (i=0; i<=max; i++)
    {
        freq[i]=0;
        num[i]=i;
    }

    for (i=0; i<n; i++)
        freq[a[i]]++;

    for (i=0; i<=max; i++)
        for (j=1; j<=max-i; j++)
            if (freq[j]<freq[j-1])
            {
                temp=freq[j];
                freq[j]=freq[j-1];
                freq[j-1]=temp;

                temp=num[j];
                num[j]=num[j-1];
                num[j-1]=temp;
            }

    printf("The numbers are");
    for (i=0; i<=max; i++)
    {
        printf(i==0 ? ":": ",");
        printf(" %d", num[i]);
    }
    printf("\nCorresponding Frequencies");
    for (i=0; i<=max; i++)
    {
        printf(i==0 ? ":": ",");
        printf(" %d", freq[i]);
    }
}

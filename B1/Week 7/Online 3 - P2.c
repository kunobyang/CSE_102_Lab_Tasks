/*
You are given a array of integers. You can assume that none of them are negative.
You have to print them in the order of their frequency in the array and also their
corresponding frequency.

For example, say you have the array - 1,0,2,1,0,1,5,2,3.
Here numbers 0 to 5 appear. 0 appears twice, 1 thrice,
2 twice, 3 and 5 appears once. So, in order of of frequency,
the numbers are 4,3,5,0,2,1.
Note that numbers with same frequency must be order according to
their values.

Sample:
Input:                      Output:
n = 7                       The numbers are: 2, 1, 0, 3
array = 3 0 2 0 3 0 3       Corresponding Frequency: 0, 1, 3, 3

n = 4                       The numbers are: 0, 1, 2, 3, 4, 5
array = 5 5 5 5             Corresponding Frequency: 0, 0, 0, 0, 0, 4
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

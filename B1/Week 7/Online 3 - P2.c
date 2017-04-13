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

/* Input the array*/
    int n,i,j, temp;
    printf("n = ");
    scanf("%d", &n);
    printf("array: ");

    int a[n];
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);

/* Find the max value */
    int max=0;
    for (i=0; i<n; i++)
        if (max<a[i])
        max=a[i];

 /* The frequency array saves the frequencies of each number.
 For example if 5 appears thrice, freq[5]=3
 Initially, the num array contains 0, 1, 2, .....
 More specifically num[i]=i
 Later on, we will use this to sort and get to out answer
 */
    int freq[max+1];
    int num[max+1];

    
 /* Initialise the freq and num array. We set freq to all zero
 because we are going to count the frequency of each element and
 initially they are all zero.
 */
    for (i=0; i<=max; i++)
    {
        freq[i]=0;
        num[i]=i;
    }

/* We increment a numbers frequency each time it appears. in the end each 
number gets incremented as many times as its frequency*/
    for (i=0; i<n; i++)
        freq[a[i]]++;

    
/* This is the crucial part.
We sort the frequency array because we are asked to output according to 
increasing frequency. So we sort the frequencies. But we need to sort the 
numbers as well. So we sort the freq array and make the same swaps in both
the num array and the frq array, This ensures that the num array is sorted 
exactly as the freq array is, ie. in ascending order of frequency.
*/
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

 /* Note: Here I used Bubble sort. You may use any sorting algo you like.
 But mahin mam added a condition that was not later checked, that numbers 
 with same freq must be in ascending order of value. To ensure this you
 must make sure your sorting algorithm is stable.  To learn more about 
 stable sorts: https://en.wikipedia.org/wiki/Sorting_algorithm#Stability
 
 In general, bubble sort, insertion sort, merge sort are stable, while
 quick sort and selection sort aren't. So you shouldn't use those two.
 */
 
 /* Finally we output*/
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

/*
Problem 2 coded by Saifullah Talukder
Statement:
Write a program that finds the first occurrence of a number V in an array of N elements. Then replaces all elements from that number to the
last with the one on its right. And then inserts "0" to the last index. If the value V is not found in the array the array should be  left
unchanged.
*/


#include <stdio.h>

int main ()
{
    int i,j,N,V;
    scanf ("%d %d",&V,&N);
    int A[N];
    for (i=0;i<N;i++) scanf ("%d",&A[i]);

    for (i=0;i<N;i++) {
        if (A[i]==V) {
            for (j=i;j<N-1;j++) A[j]=A[j+1];
            A[j]=0;
            break;
        }
    }

    return 0;
}

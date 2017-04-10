#include<stdio.h>
int A[1000];

/*
    rec_sum(n) returns the sum of A[n], A[n-1], A[n-2], ... , A[1] , A[0]
    If we can somehow find out rec_sum(n-1) we can say that
    rec_sum(n) = A[n] + rec_sum(n-1)
    
    However, n = 0 is the base case. When n = 0 it is obvious that rec_sum(0) = A[0]
    So, we won't 'go down' anymore and return the value
*/

long int rec_sum (int n)
{
    if (!n) return A[n];
    return A[n] + rec_sum(n-1);
}



int main(void)
{
    int n, i;
    long int sum;
    printf("Please input the size: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("INVALID INPUT\n");
        return 0;
    }
    printf("Please input %d integer: ", n);
    for (i = 0; i < n; i++) scanf("%d", &A[i]);

    sum = rec_sum(n-1);
    // rec_sum(n-1) because A[n-1] is the last element of the array
    printf("The sum of array is %ld\n", sum);

    return 0;
}

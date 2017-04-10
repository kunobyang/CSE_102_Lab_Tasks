#include<stdio.h>
int A[1000];

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
    printf("The sum of array is %ld\n", sum);

    return 0;
}

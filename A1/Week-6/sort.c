#include<stdio.h>

int main(void)
{
    int n, c, i, j, A[100];

    printf("Please input the size: ");
    scanf("%d", &n);
    printf("Please input %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n-1; i++) {
        for (j = i+1; j <= n-1; j++) {
            if (A[j] < A[i]) {
                c = A[i];
                A[i] = A[j];
                A[j] = c;
            }
        }
    }

    printf("The sorted array: ");
    for (i = 0; i < n; i++) printf("%d ", A[i]);

    return 0;
}

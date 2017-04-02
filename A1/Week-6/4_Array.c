#include<stdio.h>


int main(void)
{
    int i, n, A[100];
    printf("Please input the size: ");
    if (n > 100) {
        printf("The array is too big.\n");
        return 0;
    }
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++) {
        printf("The number in index %d is %d\n", i, A[i]);
    }

    return 0;
}

#include<stdio.h>
int v, A[1000];

/*
    To see, how this algo works, go to https://csacademy.com/lesson/binary_search/
*/

int binarySearch(int leftIndex, int rightIndex)
{
    if (leftIndex > rightIndex) return -1;
    int mid = (leftIndex+rightIndex)/2;
    if (A[mid] < v) return binarySearch(mid+1, rightIndex);
    else if (A[mid] > v) return binarySearch(leftIndex, mid-1);
    else return mid;
}

int main(void)
{
    int n, lo, hi, mid, idx, i;
    printf("Please input the array size: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("INVALID INPUT\n");
        return 0;
    }
    printf("Please input %d integers: ", n);
    for (i = 0; i < n; i++)scanf("%d", &A[i]);

    printf("Please input the target value: ");
    scanf("%d", &v);

    idx = binarySearch(0, n-1);

    printf("%d\n", idx);

    return 0;
}

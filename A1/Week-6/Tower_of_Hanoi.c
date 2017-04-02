#include<stdio.h>

void hanoi(int n, int s, int h, int d)
{
    if (n==1) {
        printf("Move disk from %d to %d\n", s, d);
    }
    else {
        hanoi(n-1, s, d, h);
        hanoi (1, s, h, d);
        hanoi(n-1, h, s, d);
    }
}



int main(void)
{
    int n;
    printf("Please input the number of disks: ");
    scanf("%d", &n);

    hanoi(n, 1, 2, 3);


    return 0;
}

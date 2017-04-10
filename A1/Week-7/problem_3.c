#include<stdio.h>

int main(void)
{
    int n = 30, i, j, tmp;
    int strength[30];
    printf("Please input 30 integers: ");
    for(i = 0; i < n; i++) scanf("%d", &strength[i]);

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (strength[i] > strength[j]) {
                tmp = strength[i];
                strength[i] = strength[j];
                strength[j] = tmp;
            }
        }
    }

    for (i = 0; i < n/2; i++) {
        printf("team %d is formed with strength (%d,%d)\n",
               i+1, strength[n-1-i], strength[i]);
    }

    return 0;
}

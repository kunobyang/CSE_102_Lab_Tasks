#include<stdio.h>

/* 
Well, you have to sort their strengths. Then, match the the highest strength with the lowest.
*/

int main(void)
{
    int n = 30, i, j, tmp;
    int strength[30];
    printf("Please input 30 integers: ");
    for(i = 0; i < n; i++) scanf("%d", &strength[i]);

    // sorting the strengths
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (strength[i] > strength[j]) {
                tmp = strength[i];
                strength[i] = strength[j];
                strength[j] = tmp;
            }
        }
    }
    // sorting done

    for (i = 0; i < n/2; i++) {
        printf("team %d is formed with strength (%d,%d)\n",
               i+1, strength[n-1-i], strength[i]);
    }

    return 0;
}

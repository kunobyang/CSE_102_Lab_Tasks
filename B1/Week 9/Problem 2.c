#include<stdio.h>

int main()
{
    int A[6][4] = {
                        {1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16},
                        {17,18,19,20},
                        {21,22,23,24}

                  };

    printf("A = %x\n",A);
    printf("sizeof(int) = %d, sizeof(int*) = %d, sizeof(int**) = %d\n",sizeof(int), sizeof(int*), sizeof(int**));

    printf("*A = %p, **A = %d, *A+1 = %p, *(*A+3) + 5 = %d, *(*A+2)+3 =%d ",*A, **A, *A+1 , *(*A+3) + 5, *(*(A+2)+3 ));
}

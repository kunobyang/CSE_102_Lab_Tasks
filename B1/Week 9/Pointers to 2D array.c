/*
    Declare an 2D array with random values. Then find out the sizes of int, int*, int**
    and the adress of the array.
    
    Then use this values to calculate the values of various expressions concering pointers
    and verify your values via the program.
*/



#include<stdio.h>

int main()
{
    int A[6][4] = {{6,7,4,1},
                   {10,9,5,3},
                   {3,4,8,9},
                   {5,3,8,5},
                   {6,1,9,2},
                   {9,5,2,4}};

    printf("A = %x\n",A);
    printf("sizeof(int)   = %d\n", sizeof(int));
    printf("sizeof(int*)  = %d\n", sizeof(int*));
    printf("sizeof(int**) = %d\n", sizeof(int**));

    getch();

    printf("*A = %x\n",*A);
    printf("**A = %d\n",**A);
    printf("*A+1 = %x\n",*A+1);
    printf("*(*A+3)+5 = %d\n",*(*A+3)+5);
    printf("*(*(A+2)+3) = %d\n", *(*(A+2)+3));
}

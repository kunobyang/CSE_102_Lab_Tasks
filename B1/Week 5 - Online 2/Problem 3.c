/*
    Given an integer n as a keyboard input, you will have to print
    the first (n+1) lines of Pascals triangle.

    You CAN NOT use an array. However, you may use functions.

    You prompt the user for input.

    Your input and output should look like the following sample :

    Enter the value of n : 4


        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1


    It is not necessary to align the numbers in a perfect triangle for larger inputs of n.

*/


#include<stdio.h>

unsigned long long combination(int n, int k)
{
    /*

        Takes to ingers n and k as input
        and returns nCk.

    */

    unsigned long long int ans = 1;

    int i, j = 1;

    for(i = n-k+1;i<=n;i++)
    {
        ans *= i;
        ans /= j;

        j++;

    }

    return(ans);

}

int main()
{
    int n,i,j;


    printf("Enter thr value of n : ");
    scanf("%d",&n);

    printf("\n\n");

    for(i = 0;i <= n; i++)
    {
        for(j=0;j<n - i;j++) printf(" ");

        for(j=0;j<=i;j++) printf("%d ",combination(i,j));

        printf("\n");
    }

    return 0;
}

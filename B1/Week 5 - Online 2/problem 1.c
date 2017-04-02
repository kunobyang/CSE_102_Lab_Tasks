/*
    Problem 1:
    Given an integer n, you have to print the nth term of the sequence : 1, 3, 3, 9, 27, 243 ...
    Here the next element of the sequence is generated by ,multiplying the two previous terms.

    You will be given n as a keyboard input.
    The user must be prompted to give an input.

    You can not use arrays.
    You can not use recursive functions.

    You do NOT have to handle overflow.

    Your output format should follow the following sample :

    Enter the value of n : 7
    The 7th element of the sequence is 6561.


*/


#include<stdio.h>

int main()
{
    int i;

    unsigned long long temp;

    unsigned long long int a1 = 1,a2 = 3;

    int n;

    printf("Enter the value of n : ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        temp = a2;
        a2 = a1*a2;
        a1 = temp;
    }

    if(n<1) printf("-_-");
    else if(n == 1) printf("The 1st element of the sequence is %llu.",a1);
    else if(n == 2) printf("The 2nd element of the sequence is %llu.",a1);
    else if(n == 3) printf("The 3rd element of the sequence is %llu.",a1);
    else printf("The %dth element of the sequence is %llu.",n,a1);

    return 0;




}

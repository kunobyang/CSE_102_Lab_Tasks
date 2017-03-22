/*
    Problem Statement:

    Use the functions from the the two previous functions and write a program in a single file that prompt the user for
    two inputs separately and prints the corresponding term in the Fibonacci sequence for the first input and the factorial
    of the second one.

    DO NOT USE ANY printf() or scanf() FUNCTIONS INSIDE MAIN

    YOU HAVE TO WRITE SEPARATE FUNCTIONS FOR THAT.

    WRITE SEPARATE FUNCTIONS THAT TAKE INPUT FOR FIBONACCI AND FACTORIAL AND DISPLAYS THEIR ANSWERS AND ONLY CALL THEM IN main()

    THE INPUT AND OUTPUT OF THE PROBLEM MUST BE EXACT TO SAMPLE PROVIDED BELOW:
    
        Fibonacci

        Enter the value of n : 10
        The 10th term of fibonacci is 55.

        Factorial

        Enter the value of n: 5
        The factorial of 5 is 120.


*/

#include<stdio.h>

int fibonacci(int n);

void call_factorial();

void call_fibonacci();

unsigned long long factorial(int n);

int main()
{
    call_fibonacci(); //calls the function call_fibonnaci()
    call_factorial(); //calls the function call_factorial()
    return 0;
}

int fibonacci(int n)
{
    /*Takes an integer n as input and returns
     the nth term in the Fibonacci sequence as output*/

    int i;

    int f1 = 1;
    int f2 = 1;
    int term = 1;

    for(i=3;i<=n;i++)
    {
        term = f1+f2;
        f1=f2;
        f2=term;


    }

    return(term);

}

unsigned long long factorial(int n)
{
    /*Takes an integer as input and
    return its factorial, an unsigned long
    as output*/

    int val = 1;

    int i;
    for(i=1;i<=n;i++)
    {
        val*=i;
    }

    return(val);

}

void call_factorial()
{
    /*scans an integer from the keyboard and prints it's factorial using the factorial() function*/

    int n;
    unsigned long long Answer;

    printf("Factorial\n\n");

    printf("Enter the value of n: ");
    scanf("%d",&n);

    Answer = factorial(n);// calls the function factorial() and assigns the value it returns to Answer;

    printf("The factorial of %d is %llu.\n\n",n,Answer);
}

void call_fibonacci()
{
    /*scans an integer from the keyboard and prints it's the corresponding
     term of the fibonacci sequence using the fibonacci() function*/

    int n,f;

    printf("Fibonacci\n\n");

    printf("Enter the value of n : ");
    scanf("%d",&n);

    f= fibonacci(n);// calls the function fibonacci() and assigns the value it returns to f;

    if(n == 1) printf("The 1st term of fibonacci is %d\n\n",f);
    else if(n == 2) printf("The 2nd term of fibonacci is %d\n\n",f);
    else if(n == 3) printf("The 3rd term of fibonacci is %d\n\n",f);
    else printf("The %dth term of fibonacci is %d.\n\n",n,f);

}

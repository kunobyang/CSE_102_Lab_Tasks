/*
    Problem Statement:
    Modify the problem Fibonacci and Factorial by writing a function, menu() that prints the following menu in middle of the board:
                              Choose
                              1 for fibonacci
                              2 for Factorial
                              3 for exit

    And prompts for input and returns that input as output.

    Then, run the menu in a do while loop inside the main function and do the corresponding operations until exit is selected from menu.
    Use a switch case here to implement this.

    DO NOT USE ANY printf() or scanf() STATEMENT in main() for this problem.

    ALSO PRINT ALL OUTPUT IN THE MIDDLE OF THE Board.

    Use the gotoxy() function for this task.



*/

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int menu(void);

int fibonacci(int n);

void call_factorial();

void call_fibonacci();

unsigned long long factorial(int n);

void gotoxy(int x, int y)
{
    COORD c ={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}


int main()
{
    int option;

    do
    {
        system("cls");
        option = menu();
        switch(option)
        {
            case 1:
            {
                   call_fibonacci();
                   break;
            }

            case 2:
            {
                call_factorial();
                break;
            }
            case 3:
            {
                break;
            }
            default:
            {
                printf(">:(\n");
            }
        }

        getchar();// takes the enter left in the input buffer as input
        getchar();// waits for the user to press a key before it returns back to the loop and clears screen

    }while(option!=3);

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

    gotoxy(30,8);

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

    gotoxy(30,8);

    printf("Fibonacci\n\n");

    printf("Enter the value of n : ");
    scanf("%d",&n);

    f= fibonacci(n);// calls the function fibonacci() and assigns the value it returns to f;

    if(n == 1) printf("The 1st term of fibonacci is %d\n\n",f);
    else if(n == 2) printf("The 2nd term of fibonacci is %d\n\n",f);
    else if(n == 3) printf("The 3rd term of fibonacci is %d\n\n",f);
    else printf("The %dth term of fibonacci is %d.\n\n",n,f);

}


int menu()
{
    int k;
    gotoxy(30,0);
    printf("Choose");
    gotoxy(30,1);
    printf("1 for fibonacci");
    gotoxy(30,2);
    printf("2 for Factorial");
    gotoxy(30,3);
    printf("3 for exit");
    gotoxy(30,5);
    printf("Enter your option : ");


    scanf("%d",&k);

    return(k);

}

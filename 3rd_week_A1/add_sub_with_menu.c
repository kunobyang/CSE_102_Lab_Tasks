//Task of A1 3rd week lab
//Solution by Mohammad Solaiman
 
/*
You have to add or subtract two numbers. First you will prompt the user
what task to do. Then you will take two numbers as input, and then output
the result. You have to do the task again and again until the user
commands "exit".
*/
 
/*
system("cls"); clears the terminal.
gotoxy(x, y) takes the cursor to the row y and column x.
If you don't recognize the keywords inside gotoxy(x, y)
then dont't try to. I don't either. :p
*/
 
#include<stdio.h>
#include<windows.h>
 
int menu ();
void addition ();
void subtraction ();
void gotoxy (int x, int y);
 
int main()
{
    int option;
    do {
        system("cls");
        option = menu();
        switch (option) {
            case 1: addition();
                    break;
            case 2: subtraction();
                    break;
        }
 
    } while (option!=3);
 
 
    return 0;
}
 
 
int menu ()
{
    int op;
    system("cls");
    gotoxy(10, 4); printf("Menu");
    gotoxy(15, 5); printf("1 for addition\n");
    gotoxy(15, 6);printf("2 for subtraction\n");
    gotoxy(15, 7);printf("3 for exit\n");
    gotoxy(10, 8);printf("Please enter your choice: ");
    scanf("%d", &op);
    return op;
}
 
 
void addition ()
{
    int a, b, sum;
    system("cls");
    gotoxy(10, 5); printf("Addition\n");
    gotoxy(10, 6); printf("Please input 1st number: ");
    scanf("%d", &a);
    gotoxy(10, 7); printf("Please input 2nd number: ");
    scanf("%d", &b);
    sum = a + b;
    gotoxy(10, 9); printf("The sum is %d\n", sum);
    getch(); //wait a moment to show the result
}
 
void subtraction ()
{
    int a, b, sub;
    system("cls");
    gotoxy(10, 5); printf("Subtraction\n");
    gotoxy(10, 6); printf("Please input 1st number: ");
    scanf("%d", &a);
    gotoxy(10, 7); printf("Please input 2nd number: ");
    scanf("%d", &b);
    sub = a - b;
    gotoxy(10, 9); printf("The subtracted result is %d\n", sub);
    getch(); //wait a moment to show the result
}
 
void gotoxy (int x, int y)
{
    COORD cr = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cr);
}

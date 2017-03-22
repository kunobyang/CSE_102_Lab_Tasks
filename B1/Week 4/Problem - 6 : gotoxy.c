/*
    Problem Statement :
    Have to print something from a specific cell of the console. No function for doing such a operation is supplied by ANSI.
    Instead we'll Make one using a header file windows.h. Next, we will have to clear the screen. For this we will use
    system("cls") from stdlib.h

    windows.h is a Windows-specific header file for the C and C++ programming languages which contains declarations
    for all of the functions in the Windows API, all the common macros used by Windows programmers, and all the data types
    used by the various functions and subsystems.

    THIS IS NOT A ANSI STANDARD LIBRARY. Instead, it is a library supplied by Windows designed to help windows programming*/



#include<stdio.h>
#include<windows.h>
#include<stdlib.h>


void gotoxy(int x, int y)
{
    /*Takes two integers as input and sets the console cursor to the co-ordinate of (x,y)*/

    COORD c ={x,y};
    /*
        COORD is a structure that defines the coordinates of a character cell in a console screen buffer.
        The origin of the coordinate system (0,0) is at the top, left cell of the buffer.
        Here we are declaring a COORD variable c and initializing it.
    */

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    /*
        SetConsoleCursorPosition Sets the cursor position in the specified console screen buffer.

        GetStdHandle function Retrieves a handle to the specified standard device (standard input,
        standard output, or standard error).

        STD_OUTPUT_HANDLE is a standard output device. Initially, this is the active console screen buffer, CONOUT$.
    */

    }

int main()
{
    gotoxy(10,10);
    printf("Hello World");
    getchar();
    system("cls");
    return(0);
}

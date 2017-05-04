/*
Coded by
Pritom Kundu
1605067
*/

#include <stdio.h>
#include<windows.h>
#include <stdlib.h>

const int DELAY=200;        /*Delay between frames in ms, Lower delay means faster animation*/

void  gotoxy(int c, int r);
void animate(int t1[], int t2[], int t3[], int s1, int s2, int s3);
void  hanoi(int n, int s, int d, int h, int moves_s[], int moves_d[], int*size);
void hover (int r, int x, int y);

int main()
{
    int n, i, temp, r;
    int moves_s[10000]={0};
    int moves_d[10000]={0};
    int size=0;

	int p1[20]={0};     /*list of disks at pole 1 and so on;*/
    int p2[20]={0};
    int p3[20]={0};

    int s1=0, s2=0, s3=0;   /*size of each pole*/




	printf("Enter number of disks: ");
    scanf("%d", &n);
    hanoi(n,1,3,2, moves_s, moves_d, &size);
	s1=n;


    for (i=0; i<n; i++)
        p1[i]=n-i;

    animate(p1,p2,p3,s1,s2,s3);
    gotoxy(20,8);
    printf("Press any key to start animation.");
    getchar();

    for (i=0; i<size; i++)
    {
        if (moves_s[i]==1 && moves_d[i]==2)
        {
            r=p1[s1-1];
            p1[s1-1]=0;
            s1--;

            animate(p1,p2,p3,s1,s2,s3);
            hover(r,10,9);
            hover(r,10,4);
            hover(r,22,4);
            hover(r,35,4);
            hover(r,35,9);

            p2[s2]=r;
            s2++;
            animate(p1,p2,p3,s1,s2,s3);
            Sleep(DELAY);
        }
        else if (moves_s[i]==1 && moves_d[i]==3)
        {
            r=p1[s1-1];
            p1[s1-1]=0;
            s1--;

            animate(p1,p2,p3,s1,s2,s3);
            hover(r,10,9);
            hover(r,10,4);
            hover(r,22,4);
            hover(r,35,4);
            hover(r,48,4);
            hover(r,60,4);
            hover(r,60,9);

            p3[s3]=r;
            s3++;
            animate(p1,p2,p3,s1,s2,s3);
            Sleep(DELAY);
        }
        else if (moves_s[i]==2 && moves_d[i]==1)
        {
            r=p2[s2-1];
            p2[s2-1]=0;
            s2--;

            animate(p1,p2,p3,s1,s2,s3);
            hover(r,35,9);
            hover(r,35,4);
            hover(r,22,4);
            hover(r,10,4);
            hover(r,10,9);

            p1[s1]=r;
            s1++;
            animate(p1,p2,p3,s1,s2,s3);
            Sleep(DELAY);
        }
        else if (moves_s[i]==2 && moves_d[i]==3)
        {

            r=p2[s2-1];
            p2[s2-1]=0;
            s2--;

            animate(p1,p2,p3,s1,s2,s3);
            hover(r,35,9);
            hover(r,35,4);
            hover(r,48,4);
            hover(r,60,4);
            hover(r,60,9);

            p3[s3]=r;
            s3++;
            animate(p1,p2,p3,s1,s2,s3);
            Sleep(DELAY);
        }
        else if (moves_s[i]==3 && moves_d[i]==1)
        {
            r=p3[s3-1];
            p3[s3-1]=0;
            s3--;

            animate(p1,p2,p3,s1,s2,s3);
            hover(r,60,9);
            hover(r,60,4);
            hover(r,48,4);
            hover(r,35,4);
            hover(r,22,4);
            hover(r,10,4);
            hover(r,10,9);

            p1[s1]=r;
            s1++;
            animate(p1,p2,p3,s1,s2,s3);
            Sleep(DELAY);
        }
        else if (moves_s[i]==3 && moves_d[i]==2)
        {
            r=p3[s3-1];
            p3[s3-1]=0;
            s3--;

            animate(p1,p2,p3,s1,s2,s3);
            hover(r,60,9);
            hover(r,60,4);
            hover(r,48,4);
            hover(r,35,4);
            hover(r,35,9);

            p2[s2]=r;
            s2++;
            animate(p1,p2,p3,s1,s2,s3);
            Sleep(DELAY);
        }
    }
}

void gotoxy(int c, int r)
{
    COORD position={c,r};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),position);
}

#define RIGHTANGLE      193
#define HORIZONTAL      196
#define VERTICAL        179
#define LEFTCEILING     218
#define RIGHTCEILING    191
#define LEFTFLOOR       192
#define RIGHTFLOOR      217
void animate(int t1[], int t2[], int t3[], int s1, int s2, int s3)
{
    int i,j;
    system("cls");

    gotoxy(0,20);
    for (i=0; i<21; i++)
        printf("%c",HORIZONTAL);

    gotoxy(25,20);
    for (i=0; i<21; i++)
        printf("%c",HORIZONTAL);

    gotoxy(50,20);
    for (i=0; i<21; i++)
        printf("%c",HORIZONTAL);

    for (i=10; i<20; i++)
    {
        gotoxy(10,i);
        printf("%c",VERTICAL);
        gotoxy(35,i);
        printf("%c",VERTICAL);
        gotoxy(60,i);
        printf("%c",VERTICAL);
    }

    gotoxy(10,20);
    printf("%c",RIGHTANGLE);
    gotoxy(35,20);
    printf("%c",RIGHTANGLE);
    gotoxy(60,20);
    printf("%c",RIGHTANGLE);

    for (i=0; i<s1; i++)
    {
        int width=t1[i];
        if (width==0)   continue;

        gotoxy(10-width, 19-i);
        printf("%c", LEFTCEILING);

        for (j=1; j<2*width; j++)
           printf("%c",HORIZONTAL);

        printf("%c", RIGHTCEILING);

        gotoxy(10-width, 20-i);
        printf("%c", RIGHTANGLE);

        gotoxy(10+width, 20-i);
        printf("%c", RIGHTANGLE);

        gotoxy(10, 20-i);
        printf("%c", HORIZONTAL);

        gotoxy(10, 19-i);
        printf("%c", RIGHTANGLE);

        gotoxy(0,25);
    }

    for (i=0; i<s2; i++)
    {
        int width=t2[i];
        if (width==0)   continue;

        gotoxy(35-width, 19-i);
        printf("%c", LEFTCEILING);

        for (j=1; j<2*width; j++)
           printf("%c",HORIZONTAL);

        printf("%c", RIGHTCEILING);

        gotoxy(35-width, 20-i);
        printf("%c", RIGHTANGLE);

        gotoxy(35+width, 20-i);
        printf("%c", RIGHTANGLE);

        gotoxy(35, 20-i);
        printf("%c", HORIZONTAL);

        gotoxy(35, 19-i);
        printf("%c", RIGHTANGLE);

        gotoxy(0,25);
    }

    for (i=0; i<s3; i++)
    {
        int width=t3[i];
        if (width==0)   continue;

        gotoxy(60-width, 19-i);
        printf("%c", LEFTCEILING);

        for (j=1; j<2*width; j++)
           printf("%c",HORIZONTAL);

        printf("%c", RIGHTCEILING);

        gotoxy(60-width, 20-i);
        printf("%c", RIGHTANGLE);

        gotoxy(60+width, 20-i);
        printf("%c", RIGHTANGLE);

        gotoxy(60, 20-i);
        printf("%c", HORIZONTAL);

        gotoxy(60, 19-i);
        printf("%c", RIGHTANGLE);

        gotoxy(0,25);
    }
}

void  hanoi(int n, int s, int d, int h, int *moves_s, int *moves_d, int*size)
{
    if (n==0)   return;

    hanoi(n-1,s,h,d, moves_s, moves_d, size);

    moves_s[*size]=s;
    moves_d[*size]=d;
    *size=*size+1;

    hanoi(n-1,h,d,s, moves_s, moves_d, size);
}

void hover (int r, int x, int y)
{
    int i;

    gotoxy(x-r,y-1);
    printf("%c", LEFTCEILING);
    for (i=1; i<2*r; i++)
        printf("%c", HORIZONTAL);
    printf("%c", RIGHTCEILING);

    gotoxy(x-r,y);
    printf("%c", LEFTFLOOR);
    for (i=1; i<2*r; i++)
        printf("%c", HORIZONTAL);
    printf("%c", RIGHTFLOOR);

    Sleep(DELAY);

    gotoxy(x-r,y-1);
    for (i=0; i<=2*r; i++)
        printf(" ");

    gotoxy(x-r,y);
    for (i=0; i<=2*r; i++)
        printf(" ");
}

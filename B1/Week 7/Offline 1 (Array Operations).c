/*
Coded by
Pritom Kundu
1605067
*/

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

#define MAX 10000
int menu();
void print (int array[], int size);
void sort  (int array[], int size);
int  search(int array[], int size, int flag, int val);    /* returns index if found, -1 otherwise */
void append(int array[], int size, int val);
void insert(int array[], int size, int flag, int val);
int  erase (int array[], int size, int flag, int val);    /* returns 1 if element found and deleted, 0 otherwise */

int main()
{
    int a[MAX];
    int size=0;
    int sortflag=0;
    int i,j;

    while (1)
    {
        system("cls");

        int k=menu();
        if (k<=0 || k>8)
        {
            printf("Invalid Input. Try again.");
            getch();
            continue;
        }
        if (k==8)   return 0;


        if (k==1)
        {
            sortflag=0;
            printf("Enter number of values: ");
            scanf("%d", &size);
            for (i=0; i<size; i++)
            {
                printf("Enter number %d: ", i+1);
                scanf("%d", &a[i]);
            }

            for (i=size; i<MAX; i++)
                a[i]=0;

            printf("New list created\n");
        }

        else if (k==2)
        {
            if (size==0)
            {
                printf("List is empty!");
                getch();
                continue;
            }
            print(a, size);
        }

        else if (k==3)
        {
            if (size==0)
            {
                printf("List is empty!");
                getch();
                continue;
            }

            sort(a, size);
            printf("The list has been sorted.\n");
            sortflag=1;
        }

        else if (k==4)
        {
            if (size==0)
            {
                printf("List is empty!");
                getch();
                continue;
            }

            int val;
            printf("Enter value to search for: ");
            scanf("%d", &val);

            int idx=search(a, size, sortflag, val);

            if (idx==-1)
                printf("Value not found in list.\n");
            else
                printf("Value found at position %d\n", idx+1);
        }

        else if (k==5)
        {
            int val;
            printf("Enter value to append: ");
            scanf("%d", &val);

            append(a, size, val);
            size=size+1;
            sortflag=0;
            printf("The value has been appended.\n");
        }

        else if (k==6)
        {
            int val;
            printf("Enter value to insert: ");
            scanf("%d", &val);

            insert(a, size, sortflag, val);
            size=size+1;
            printf("The value has been inserted.\n");
        }

        else if (k==7)
        {
            if (size==0)
            {
                printf("List is empty!");
                getch();
                continue;
            }

            int val;
            printf("Enter value to delete: ");
            scanf("%d", &val);

            int flag=erase(a, size, sortflag, val);
            if (flag)
            {
                printf("The value has been deleted.\n");
                size=size-1;
            }
            else
                printf("Value not found in list.");
        }

        getch();
    }
}

int menu()
{
    printf("Choose: \n");
    printf ("\t1. For entry of a list\n");
    printf ("\t2. For printing the list\n");
    printf ("\t3. For sorting the list\n");
    printf ("\t4  For searching a number\n");
    printf ("\t5  For appending a number\n");
    printf ("\t6  For inserting a number\n");
    printf ("\t7  For deleting a number\n");
    printf ("\t8. For exit\n");
    printf ("Enter your option: ");

    int option;
    scanf ("%d", &option);
    return option;

}

void print (int array[], int size)
{
    printf ("The list is:");
    int i;
    for (i=0; i<size; i++)
    {
        if (i>0)    printf(",");
        printf(" %d", array[i]);
    }
    printf("\n");
}

void sort  (int array[], int size)
{
    int i, j, temp;
    for (i=0; i<size; i++)
    {
        int min=array[i];
        int idx=i;

        for (j=i+1; j<size; j++)
            if (min>array[j])
            {
                min=array[j];
                idx=j;
            }

        temp=array[idx];
        array[idx]=array[i];
        array[i]=temp;
    }
}

int search(int array[], int size, int sortflag, int val)   //returns index if found, -1 otherwise
{
    int i;
    for (i=0; i<size; i++)
    {
        if (array[i]==val)
            return i;
        else if (array[i]>val && sortflag)
            return -1;
    }

    return -1;
}

void append(int array[], int size, int val)
{
    array[size]=val;
}
void insert(int array[], int size, int sortflag, int val)
{
    if (sortflag==0)    append(array, size, val);
    else
    {
        int idx, i;
        for (idx=0; idx<size; idx++)
            if (array[idx]>val)
                break;

        for (i=size; i>idx; i--)
            array[i]=array[i-1];
        array[idx]=val;
    }
}
int erase (int array[], int size, int flag, int val)
{
    int i;
    int idx=search(array, size, flag, val);
    if (idx==-1)
        return 0;

    for (i=idx; i<size; i++)
        array[i]=array[i+1];
    return 1;
}

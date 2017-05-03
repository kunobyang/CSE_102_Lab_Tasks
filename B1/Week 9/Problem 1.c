#include<stdio.h>
//#include<stdlib.h>

int process(int *(*pf)(int*,int*))
{
    //int *a =(int*)malloc(sizeof(int));
    //int *b =(int*)malloc(sizeof(int));

    int a,b;

    scanf("%d %d",&a,&b);

    return(*pf(&a,&b));

}




int main()
{
    int* sum(int* a, int* b)
    {
        *a = *a + *b;
        return(a);
    }

    int* sub(int* a, int* b)
    {
        *a = *a - *b;
        return(a);
    }

    int* max(int* a, int* b)
    {
        //*a = *a + *b;
        return((*a>*b)?a:b);
    }

    printf("%d",process(max));

    return 0;
}

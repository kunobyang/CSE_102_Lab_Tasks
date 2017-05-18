#include<stdio.h>

int process(int*(*pf)(int*,int*))
{
    int a,b;
    scanf("%d%d",&a,&b);
    return *(pf(&a,&b));
}

int main()
{
    int res;
    int* sum(int* a, int* b)
    {
        res= *a + *b;
        return &res;
    }

    int* sub(int* a, int* b)
    {
        res= *a - *b;
        return &res;
    }

    int* max(int* a, int* b)
    {
        res= (*a > *b ? *a : *b);
        return &res;
    }

    printf("The sum is %d\n",process(sum));
    //printf("The difference is %d\n",process(sub));
    //printf("The max is %d\n",process(max));
}

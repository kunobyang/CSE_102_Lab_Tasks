#include<stdio.h>


int main()
{
    int a, b, i;
    printf("Enter two numbers: ");          //IO
    scanf("%d%d", &a, &b);

    int prod=0;                 //This will save the product

    for (i=0; i<32; i++)        //index of bit
    {
        if (b&(1<<i))           //Check if the ith bit is 1
            prod+=(a<<i);       //If it is the lshift a by i bits and add to the product
    }
    printf("The product is %d", prod);
}

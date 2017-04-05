#include<stdio.h>

int main()
{

    int n;
    int i,j;

    int max;


    printf("Enter the value of n : ");

    scanf("%d",&n);

    int numbers[n];

    printf("\n");



    for(i = 0; i< n; i++)
    {
        printf("Enter number %d : ",i+1);

        scanf("%d",&numbers[i]);

    }

    for(i=0;i<n;i++)
    {
        int temp;

        max = i;

        for(j = i+1; j<n; j++)
        {
            if(numbers[max] < numbers[j]) max = j;
        }

        temp = numbers[max];
        numbers[max] = numbers[i];
        numbers[i] = temp;
    }

    printf("\nThe list is : \n\n");



    for(i = 0; i< n; i++)
    {
        printf("%d ",numbers[i]);

        //scanf("%d",&number[i]);

    }




}


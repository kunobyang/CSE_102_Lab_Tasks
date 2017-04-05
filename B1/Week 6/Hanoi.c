#include<stdio.h>


void Hanoi(int disc, int source, int Destination, int Help)
{
    if(disc == 1) printf("Move disk from %d to %d\n",source, Destination);
    else
    {
        Hanoi(disc-1,source,Help,Destination);
        //Hanoi(1,source,Destination,Help);
        printf("Move disk from %d to %d\n",source, Destination);
        Hanoi(disc-1,Help,Destination,source);
    }
}


int main()
{
    int disc;
    printf("Enter number of discs : ");
    scanf("%d",&disc);
    Hanoi(disc,1,3,2);

}

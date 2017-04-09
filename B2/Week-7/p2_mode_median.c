/************************************************************************************
 * 
 * 
 *  PROBLEM DESCRIPTION:
 * ----------------------
 * 
 * 	You will be given an array of size n (given by user), and then you have to find
 * 	out the meadian value and mode of the elements of the array.
 * 
 * 	https://www.mathsisfun.com/median.html
 * 	https://en.wikipedia.org/wiki/Mode_(statistics)
 *
 *  SOLUTION:
 * -----------
 *  	At first I have sorted the array using bubble sort. You can use other algorithms for sorting too.
 * 	http://quiz.geeksforgeeks.org/bubble-sort/
 *	https://www.youtube.com/watch?v=Jdtq5uKz-w4
 * 
 *  	Now we have a sorted array. We can easily find the median value using the defination,
 *  	and this exactly what we have done.
 * 
 *      For finding the mode value, we have started from the beginning of the sorted array,
 * 	and checked how many times a value occurs in the array. We printed the value which
 * 	occured maximum in the array. Though there is a nested loop in the code, they actually
 * 	work as single loop. (Why? Think and find out yourself.)
 * 
 * 	That's how I solved it. (I missed a statement, so my code was not considered correct on
 * 	the evaluation :'( )
 * 
 * 	I hope you will easily understand the code. Happy coding!
 * */


#include <stdio.h>

int main()
{
    //n = array_size, i, j for loops
    int n, i, j;			
    scanf("%d", &n);
	
    //taking the array
    int ara[n];
    for (i = 0; i < n; i++)
        scanf("%d", &ara[i]);
       
    
    //sorting the array
    for (i = 0; i < n-1; i++)
        for (j = i+1; j < n; j++)
        {
            if (ara[i] > ara[j])
            {
                int temp = ara[i];
                ara[i] = ara[j];
                ara[j] = temp;
            }
        }
	
    //printing the median value
    if (n%2) printf("Median: %d\n", ara[n/2]);
    else printf("Median: %lf\n", (ara[n/2]+ara[n/2-1])/2.0);

    //finding out and printing the mode value
    int mode = ara[0], num = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; i+j < n; j++);
            if ( ara[i] != ara[i+j])
                break;

        if (j > num)
        {
            mode = ara[i];
            num = j;
        }
        i += j;
    }

    printf("Mode : %d\n", mode);

    return 0;
}

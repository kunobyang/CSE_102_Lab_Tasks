/*
    Problem Statement:
        You're given an array of 'n' size. Find the minimum & maximum element of the array. Also find out the mean value &
        the standard deviation.
    
    Solution:
        Keep a variable valued to 0. while inputting sum the inputted element array to the variable. After the inputting
        loop, divide the varaible by n. That's our mean value.
        Now run a loop. Inside it, calculate the minimum, maximum & standard deviation. You guys know how to do this, right?
    
    - rafid ( 1605109 )
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;	// size of array
	scanf("%d", &n);
	
	if(!n) {
		printf("No numbers in the array :/\n");
		return 0;
	}
	
	int a[n], i;
	double mean = 0;
	for(i=0; i<n; ++i) {
		scanf("%d", &a[i]);
		mean += a[i];
	}
	mean /= n;
	
	int min = a[0], max=a[0];
	double stdev = 0;
	
	for(i=0; i<n; ++i) {
		if(min > a[i]) min = a[i];
		if(max < a[i]) max = a[i];
		stdev += abs(a[i] - mean);
	}
	stdev /= n;
	
	printf("Minimum: %d\n", min);
	printf("Maximum: %d\n", max);
	printf("Mean: %lf\n", mean);
	printf("Standard Deviation: %lf\n", stdev);
	
	return 0;
}

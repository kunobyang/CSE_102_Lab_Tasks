/*
    Problem Statement:
	for n = 1 -->
	1
	for n = 2 -->
	  2
	2 1 2
	for n = 3 -->
	    3 
	  3 2 3 
	3 2 1 2 3
	.
	.
	.
	for n = 9 -->
			9 
		      9 8 9 
		    9 8 7 8 9 
		  9 8 7 6 7 8 9 
		9 8 7 6 5 6 7 8 9 
	      9 8 7 6 5 4 5 6 7 8 9 
	    9 8 7 6 5 4 3 4 5 6 7 8 9 
	  9 8 7 6 5 4 3 2 3 4 5 6 7 8 9 
	9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9
	
	hope you got the pattern. Now let's come to the solution!
	
    Solution:
	Observe that for i'th line where 1 <= i <= n. There are 3 portions:
	firstly, (n-i) * 2 spaces.
	secondly, i numbers each starting from n and ending with n-i+1.
		these two together looks like this: (n=9)
				9 
			      9 8 
			    9 8 7 
			  9 8 7 6 
			9 8 7 6 5 
		      9 8 7 6 5 4 
		    9 8 7 6 5 4 3 
		  9 8 7 6 5 4 3 2 
		9 8 7 6 5 4 3 2 1 
		hope you can figure out this much!
	thirdly, i-1 numbers each starting with (n-i+2) which equals (n-i+1) + 1. Observe that, its the number next to
	the last number of second portion. Anyway it'll start with (n-i+1 + 1) and will end with n.
		only this part will look like this: (n=9)

		9 
		8 9 
		7 8 9 
		6 7 8 9 
		5 6 7 8 9 
		4 5 6 7 8 9 
		3 4 5 6 7 8 9 
		2 3 4 5 6 7 8 9 
	Notice that, in the first line this part will print nothing!

	Now, I hope that we're on the same page till now!!
	So, start coding!!
	
    - rafid ( 1605109 )
*/

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int i, j, k;
	for(i=1; i<=n; ++i) {
		for(j=1; j<=n-i; ++j) printf("  ");		// first portion. space printing
		for(j=1; j<=i; ++j) printf("%d ", n-j+1);	// second portion. printing n to n-i+1
		for(j=1; j<i; ++j) printf("%d ", n-i+1 + j);	// third portion. printing n-i+1+1 through n
		printf("\n");
	}
	
	return 0;
}

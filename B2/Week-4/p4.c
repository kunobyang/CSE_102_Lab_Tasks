/*
    Problem Statement:
        Pascal's Triangle
        -----------------
        You have to print it to n'th level for an input number n.
        for n = 0 output:
        1
        for n = 1 output:
          1   
        1   1
        for n = 2 output:
            1   
          1   1   
        1   2   1
        .
        .
        for n=5 output:
                  1   
                1   1   
              1   2   1   
            1   3   3   1   
          1   4   6   4   1   
        1   5   10   10   5   1
        
    Solution:
        Actually this problem is a slight variant of the one stated 'p1'.
        There will be n+1 rows each consisting (i+1) numbers for i=0,....,n
        for each j=0,...,i in row i, the corresponding number will be iCj which is actually (i!) / (j! * (i-j)!)
        You can do it straight. But I slightly deviated.
        let's take a variable which is the maximum of j and i-j; Call it r. then iCj = iCr = (i!) / (r! * (i-r)!)
        let's divide i! by r!. We get ((r+1)*(r+2)*....*(i-1)*(i)) / ((i-r)!).
        Now we calculate the numerator and denominator. And then answer = numerator / denominator.
        Fada!
    
    - rafid ( 1605109 )
*/

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int i, j, k;
	for(i=0; i<=n; ++i) {
		for(j=0; j<n-i; ++j) printf("  ");      // spacing
		for(j=0; j<=i; ++j) {
			long long val = 1;
			int r1 = j, r2 = i-j;
			int r = r1 > r2 ? r1 : r2;
			
			for(k=r+1; k<=i; ++k) val *= k;     // multiplying numerators
			for(k=1; k<=i-r; ++k) val /= k;     // dividing denominators
			printf("%lld   ", val);             // print number & space
		}
		printf("\n");
	}
	
	return 0;
}

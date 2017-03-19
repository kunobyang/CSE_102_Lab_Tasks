/*
    problem statement:
        hope you guys know the definition of prime numbers. Numbers that can only be divided by 1 & that number only
        are called primes. Given two number n & m, output the primes from m to n inclusive. where 2 <= m <= n <= 2^31 - 1.
        here, the word inclusive means both m & n have to be taken into account in terms of checking primes
    
    solution:
        actually, the method instructors recommended to solve this problem is actually foul. Time Complexity is too high.
        But you guys don't need to sweat your eyebrowses for now.
        What we're gonna do is, run a loop from m to n. Then for each of these number, we check whether it's prime or not.
        By the hard way!!
        To check a number's primeness, we run a loop from 2 to sqrt(i) for i=m, m+1, ..., n-1, n and check whether i is
        divisible by any of these numbers. If it's divisible, then i is not prime. Move on. But if its not, print i out.
    
    - rafid ( 1605109 )
*/

#include <stdio.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	
	int i, j;
	for(i=m; i<=n; ++i) {
		// first we consider i to be a prime. 1 denotes prime and 0 denotes false
		int isprime = 1;
		for(j=2; j*j <= i; ++j) {
			if(i % j == 0) {
				isprime = 0;	// j divides i; i is not a prime
				break;
			}
		}
		
		if(isprime == 1) printf("%d ", i);
	}
	
	return 0;
}

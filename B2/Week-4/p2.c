/*
    problem statement:
        As you know, e ^ -x = 1 - x + x^2 / 2! - x^3 / 3! + x^4 / 4! - ......... n'th power of x ..... inf
        anyway, we're not counting till infinity. What we want you to do is, Given n and x where n is an integer
        and x is a real number, calculate e ^ -x;
    
    restrictions:
        Don't use any library function.
    
    solution:
        At first some of you might think that we have to calculate n! to divide (n+1)th term in the series &
        n! can be huge. It can make happen integer overflow.
        Well, we will not follow the hard way.
        
        Let's take a variable called 'term' which is the term we're currently working on.
        Initially, term = 1 for n = 0;
        Then notice that, for every term we're actually multiplying the previous term with (-x/i) where i is
        the power of x in that term; 1 <= i <= n.
        So we can always multiply term with (-x/i) and update the value of term by it, like: term = term * (-x/i);
        Then we sum it up with the variable we kept named as 'res' which will produce the result.
        Done? Great! Output the result!
    
    - rafid ( 1605109 )
*/

#include <stdio.h>

int main()
{
	double x;
	int n;
	scanf("%lf %d", &x, &n);
	
	double res = 1, term = 1;
	int i;
	for(i=1; i<=n; ++i) {
		term = term * (-x / i);
		res = res + term;
	}
	
	printf("%lf\n", res);
	return 0;
}

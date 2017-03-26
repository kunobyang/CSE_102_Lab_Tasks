/*
    Problem Statement:
        A six digit number will be the input to your program. Be assured that there will be no leading zero.
        You need to find the difference of the sum of odd position values and even position values.
        With me so far? No? Try this example:
            Input = 734562;
            I am counting from right to left. So in position 1, we have 2; in position 2, we have 6, and then
            for rest, we get 5, 4, 3, 7 respectively
            Odd position numbers are therefore: 2, 5, 3; OddSum = 2 + 5 + 3 = 10
            Even position numbers are therefore: 6, 4, 7; EvenSum = 6 + 4 + 7 = 17
            Difference = | OddSum - EvenSum | = | 10-17 | = |-7| = 7
    
    Restriction:
        abs() function can not be used, loops are not allowed, so is not array
    
    Solution:
        As we're restricted to use loops, we have to find out every digit by hand. We are not also allowed to
        use array, so we can't store the data ( actually we don't need to :p ). And also, abs() is not allowed,
        therefore we make our own.
        Firstly, we have to get the digits. Lets start with the rightmost digit. How to get it?
        Suppose input = n; So (n % 10) actually gives us the rightmost digit of n. So n % 10 = 2;
        Now, let's consider 2 as a odd position digit. So let's keep track of OddSum and EvenSum;
        As we got a odd position digit, we sum it up with OddSum; So Oddsum = OddSum + 2;
        
        Now we have to get the second digit which is 6. Now, can we do n % 10 again? It'll give 2 again.
        So what we can do is, divide n by 10. So the rightmost digit is gone and the previous digit becomes the
        new rightmost digit. So we do, n = n / 10. So n becomes 73456. Now we do n % 10. It gives us 6.
        Its a even position number. So we add it to EvenSum;
        
        We follow the same procedure a total of 6 times. So we get like this: Odd, Even, Odd, Even, Odd, Even.
        Now we have OddSum and EvenSum. Suppose OddSum > EvenSum; So difference = OddSum - EvenSum.
        If OddSum < EvenSum, difference will be negative. So we multiply it with (-1).
        
        Now let's code this shit up!
    
    - rafid ( 1605109 )
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int OddSum = 0, EvenSum = 0;
    
    OddSum += n % 10;
    n /= 10;
    EvenSum += n % 10;
    n /= 10;
    OddSum += n % 10;
    n /= 10;
    EvenSum += n % 10;
    n /= 10;
    OddSum += n % 10;
    n /= 10;
    EvenSum += n % 10;
    n /= 10;
    
    int difference = OddSum - EvenSum;
    if(difference < 0) difference *= -1;
    printf("%d\n", difference);
    
    return 0;
}

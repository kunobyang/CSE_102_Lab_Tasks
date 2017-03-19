/*
    Problem Statement:
        Tick Tock
        ---------
        You're given two integers h1, m1 which denotes the time of a clock by h1:m1. You're asked what will be the clock time
        after h2 hours and m2 minutes. h2, m2 will be provided. Note that this clock is 12 hour clock.
        Output in hh:mm format.
    
    Sample I/O:
        h1, m1, h2, m2      |       Output
        ----------------------------------
        10 00   2 30        |       12:30
        11 59   0 2         |       12:01
        12 30   9 15        |       09:45
        11 15   47 55       |       11:10
    
    Solution:
        Say that the resultant time is h hours and m minutes. So obviously what we have to do is sum m1, m2. The summation
        will be the resultant minute. So m = m1 + m2.
        But, if m > 59? then what do we do? the extra minutes will need to converted to hours and add that to resultant hour, h.
        And then if h is greater than 12, we need to mod h with 12 as it can't show time greater than 12.
        But, if the modulus produces 0 as h? Then we add 12 to h, right?
        
        So, the steps are:
            h = h1 + h2;
            m = m1 + m2;
            h += m / 60;    // add the extra hours produced by minutes
            m = m % 60;     // we have to keep minutes below 60
            h = h % 12;     // keep h between 1 and 12
            if(h == 0)
                h = h + 12; // if h becomes zero add up 12
        
        Easy, right?
        But! We are not done yet! We have to print in hh:mm format. Which means there needs to be 2 digits for both hours and
        minutes. As we need to zero prefix if necessary, we will use %02d specifier.

    - rafid ( 1605109 )
*/

#include <stdio.h>

int main()
{
    int h1, m1, h2, m2;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
    
    int h = h1 + h2;
    int m = m1 + m2;
    h += m / 60;
    m %= 60;
    h %= 12;
    if(h == 0) h += 12;
    
    printf("%02d:%02d\n", h, m);
    return 0;
}

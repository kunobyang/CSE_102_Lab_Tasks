/*
    Problem Statement:
        Input will be a character denoting a specific month. You have to output the total days of that month.
        Here's a list of characters which denotes the corresponding months:
            January     -   'J', 'j'
            February    -   'F', 'f'
            March       -   'M', 'm'
            April       -   'A', 'a'
            May         -   'Y', 'y'
            June        -   'N', 'n'
            July        -   'L', 'l'
            August      -   'G', 'g'
            September   -   'S', 's'
            October     -   'O', 'o'
            November    -   'V', 'v'
            December    -   'D', 'd'

    Restriction:
        No if-else if-else allowed. Use switch only
    
    Solution:
        It's just the basic. For each char, figure out the month, output its days
    
    - rafid ( 1605109 )
*/

#include <stdio.h>

int main()
{
	char ch;
	scanf("%c", &ch);
	
	switch(ch) {
		case 'J':
		case 'j':
			printf("31\n");	// Jan
			break;
		case 'F':
		case 'f':
			printf("28\n");	// Feb
			break;
		case 'M':
		case 'm':
			printf("31\n");	// Mar
			break;
		case 'A':
		case 'a':
			printf("30\n");	// Apr
			break;
		case 'Y':
		case 'y':
			printf("31\n");	// May
			break;
		case 'N':
		case 'n':
			printf("30\n");	// June
			break;
		case 'L':
		case 'l':
			printf("31\n");	// July
			break;
		case 'G':
		case 'g':
			printf("31\n");	// Aug
			break;
		case 'S':
		case 's':
			printf("30\n");	// Sep
			break;
		case 'O':
		case 'o':
			printf("31\n");	// Oct
			break;
		case 'V':
		case 'v':
			printf("30\n");	// Nov
			break;
		case 'D':
		case 'd':
			printf("31\n");	// Dec
			break;
		default:
			printf("Invalid character -_-\n");
	}
	
	return 0;
}

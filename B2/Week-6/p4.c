/*
	Problem Statement:
		You're given a string ( an array of characters ) consisting lower case letters only. Output which letter appears
		how many times.
	
	Solution:
		Input the string. Keep another array with the size of 26. Now for the i'th index of this array, it holds the
		count of appearence of character (i+'a'). Inititalize all the values of this array to 0.
		Then run a loop from 0 to the string length(exclusive) and increment the cnt of s[i];
		Then for each character ('a'+i) where 0 <= i <= 25, output the count of [i].
	
	- rafid ( 1605109 )
*/

#include <stdio.h>
#include <string.h>

int main()
{
	const int mx = 1000;	// maximum size
	char s[mx];
	scanf("%s", s);
	
	// doing only for lower case letters
	int cnt[26];
	memset(cnt, 0, sizeof cnt);		// initializing to zero
	
	int l = strlen(s), i;			// strlen returns the length of a string
	for(i=0; i<l; ++i) ++cnt[s[i]-'a'];	// observe carefully
	
	for(i=0; i<26; ++i) {
		if(cnt[i]) {
			printf("%c - %d\n", i+'a', cnt[i]);
		}
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

char *mystrstr(char *str1, char *str2) {
	int i, j, k;
	for(i=0; *(str1+i); ++i) {
		for(j=0; *(str2+j); ++j)
			if(*(str1+i+j) != *(str2+j)) break;
		
		if(!(*(str2+j))) return (str1+i);
	}
	
	return "NULL";
}

int main()
{
	char *str1;
	char *str2;
	str1 = (char *) malloc (100 * sizeof(char));
	str2 = (char *) malloc (100 * sizeof(char)); 

	gets(str1);
	gets(str2);
	
	printf("%s\n", mystrstr(str1, str2));
	free(str1);
	free(str2);

	return 0;
}

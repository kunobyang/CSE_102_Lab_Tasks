// Don't understand. Mara khao

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// because C (whatever this version is) doesn't allow variable size declaration -_- 
#define SZ 101
#define cnt 10

struct stud {
	char *name;
	int id;
	int age;
	double cgpa;
} ppl[cnt];

void swap(int i, int j) {
	struct stud temp = ppl[j];
	ppl[j] = ppl[i];
	ppl[i] = temp;
}

void sort_ppl(int cmp) {
	int i, j;
	for(i=0; i<cnt-1; ++i) {
		for(j=0; j<cnt-i-1; ++j) {
			if(cmp == 0 && strcmp(ppl[j].name, ppl[j+1].name) > 0) swap(j, j+1);
			else if(cmp == 1 && ppl[j].id > ppl[j+1].id) swap(j, j+1);
			else if(cmp == 2 && ppl[j].age > ppl[j+1].age) swap(j, j+1);
			else if(cmp == 3 && ppl[j].cgpa > ppl[j+1].cgpa) swap(j, j+1);
		}
	}
}

int main()
{
	freopen("in", "r", stdin);
	
	int i;
	for(i=0; i<cnt; ++i) {
		ppl[i].name = (char *) malloc(SZ * sizeof(char));
		scanf("%s %d %d %lf%*c", ppl[i].name, &ppl[i].id, &ppl[i].age, &ppl[i].cgpa);
	}
	
	// resets stdin redirection
	freopen ("/dev/tty", "r", stdin);
	
	int cmp;
	scanf("%d", &cmp);
	
	sort_ppl(cmp);
	
	for(i=0; i<cnt; ++i) {
		printf("%s\n%d\n%d\n%lf\n", ppl[i].name, ppl[i].id, ppl[i].age, ppl[i].cgpa);
	}
	
	return 0;
}

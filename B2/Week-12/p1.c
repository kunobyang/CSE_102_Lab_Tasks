#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int MAX_NUM = 1e6;
const double eps = 1e-9;

struct point {
	double x, y;
};

struct circle {
	struct point cn;
	double r;
};

int inSide(struct point p, struct circle c) {
	double temp = (c.cn.x - p.x) * (c.cn.x - p.x) + (c.cn.y - p.y) * (c.cn.y - p.y) - c.r * c.r;
	return (temp-eps) <= 0 ? 1 : 0;
}

// the square is 1x1
int main()
{
	struct circle c;
	c.cn.x = 0.5, c.cn.y = 0.5, c.r = 0.5;
	
	int cnt = 0, i;
	srand((unsigned) time(NULL));
	
	struct point p;
	for(i=0; i<MAX_NUM; ++i) {
		p.x = (double) rand() / RAND_MAX;
		p.y = (double) rand() / RAND_MAX;
		if(inSide(p, c)) ++cnt;
	}
	
	double pi = 4 * ((double) cnt/MAX_NUM);
	printf("%lf\n", pi);
	
	return 0;
}

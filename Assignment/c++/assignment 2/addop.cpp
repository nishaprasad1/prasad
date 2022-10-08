#include "interval.h"
#include <cstdio>

int main(void)
{
	int r, p;
	printf("First Interval : ");
	scanf("%d%d", &r, &p);
	Interval a(r, p);
	printf("Second Interval: ");
	scanf("%d%d", &r, &p);
	Interval b(r, p);
	Interval c = a + b; //a.operator+(b)
	printf("Total Interval = ");
	c.Print();
	Interval d=a-b; //b.operator-(a)
	printf("after subtration :");
        d.Print();	
}
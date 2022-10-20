#include "Assignment2.h"
#include <cstdio>

int main(void)
{
	int r, p;

	printf("First Amount in Rupee and paise : ");
	scanf("%d%d", &r, &p);
	Money a(r, p);

	printf("Second Amount in Rupee and paise : ");
	scanf("%d%d", &r, &p);
	Money b(r, p);
	Money m(a); //call to copy constructor

	Money c = a + b; //a.operator+(b)
	
	Money d = a - b; //a.operator-(b)

	c.Print();

	d.Prints();
}

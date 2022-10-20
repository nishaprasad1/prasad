#include "loan501.h"
#include<cstdio>

int main(void)

{
	double p;
	float n;
	int i;
	double l;
	printf("Enter Principle Amount:\n");
	scanf("%lf", &p);
	printf("Period:\n");
	scanf("%f", &n);
//	printf("Set Limit");
//	scanf("%lf", &l);

//	Loan a;

//	a.Setprinciple(p);
//	a.Setperiod(n);
	
	printf("Which type of loan you want:\n 1) Personal Loan \n 2) Home Loan\n");
	scanf("%d", &i);

	if(i == 1)
	{	

	PersonalLoan x;
	x.Setprinciple(p);
	x.Setperiod(n);
	printf("EMI for Personal Loan: %.2lf \n", x.GetEMI());
	printf("Including of all taxes - EMI: %.2lf \n", x.GetTax());
	}
	else
	{
	printf("Set Limit");
	scanf("%lf", &l);

	HomeLoan y;

	y.Setprinciple(p);
	y.Setperiod(n);
	y.Setlimit(l);
	printf("EMI for Home Loan: %.2lf \n", y.GetEMI());
	printf("DISCOUNT ADDED OF 5 PERCENT EMI: %.2lf \n", y.GetDiscount());
	}
}

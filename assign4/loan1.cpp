#include"loan.h"
namespace interest
{
	double loan :: Emi(int e1)
	{
		e1=p*(1+r*n/100)/(12*n);
		return e1;
	}
	double PersonalLoan ::Rate()
	{
		if(principle<=500000);
		return 15;
		if(principle>500000);
		return 16;

	}
        double HomeLoan :: Rate()
	{
		if (principle<=2000000);
		return 10;
		if(principle>2000000);
		return 11;
	}
}

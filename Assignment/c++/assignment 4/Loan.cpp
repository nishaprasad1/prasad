#include "Loan.h"

double Loan::getPrinciple(){
	return principle;
}
float Loan::getPeriod(){
	return period;
}
void Loan::setPrinciple(double p){
	principle=p;
}
void Loan::setPeriod(float p){
	period=p;
}
double Loan::getEmi(){
	return principle*( 1 + getRate()*period/100)/(12*period);
}

float PersonalLoan::getRate(){
	if(getPrinciple()<=500000)
		return 15;
	else
		return 15;
}
float HomeLoan::getRate(){
	if(getPrinciple()<=2000000)
		return 10;
	else
		return 11;
}

int main(){
	PersonalLoan p1;
	p1.setPrinciple(50000);
	p1.setPeriod(4);
	cout<< p1.getEmi()<<"\n";

	HomeLoan h1;
	h1.setPrinciple(20000000);
	h1.setPeriod(2);
	cout<< h1.getEmi()<<"\n";
}

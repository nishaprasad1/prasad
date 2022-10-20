#include "Assign4.h"
#include <iostream>
using namespace std;

float Compute(Loan& L, double principle, float period)
{
	return L.GetEMI(principle,period);
}



int main(void)
{
	double principle;
	float period;
	int choice;

	cout << "Enter the principle" << endl;
	cin  >> principle;
	cout << "Enter the period of Loan" << endl;
	cin >> period;
	
	PersonalLoan a(principle,period);
	HomeLoan b(principle, period);
	cout << "Press 1 for Personal Loan/ 2 for Home Loan" << endl;
	cin >> choice;
	if(choice == 1)
	{
		cout << "Total Personal Loan EMI Amount: Rs " << Compute(a, principle, period) << endl;
	}
	else
	{
	cout << "Total Home Loan EMI Amount: Rs " << Compute(b, principle, period) << endl;
	}
	

}

#include "Assign3.h"
#include<iostream>
using namespace std;

double GST(Patient& p)
{
	double amount;
	amount = p.getBillAmount() * 1.18;
	return amount;
}

int main(void)
{
	int patientId;
	string patientName;
	int bedtype;
	int Days;
	int choice;
	double discount;
	double amount;
	cout <<"Enter patient ID:";
	 cin >> patientId;
	cout << "Enter patient Name:";
	 cin >> patientName;
	cout << "Enter bedtype:";
	 cin >> bedtype;
        cout << "Enter number of days:"<< endl;
         cin >> Days;	
	
	Patient a (patientId, patientName,bedtype, Days);
  	cout <<"Total generated Bill is : Rs." <<a.getBillAmount()<< endl;
  	cout << "Total Amount with GST: Rs." << GST(a) <<endl;
	
	cout << " Is patient an Hospital Employee? Enter 1 if YES/ 2 if NO " << endl;
	cin >> choice;
        cout << "Enter discount"<< endl;
         cin >> discount;	
	if (choice == 1)
	
	{
	Inhousepatient b(patientId, patientName, bedtype, Days, discount);
	cout<< endl << " Amount after Discount = " << b.getBillAmount() << endl;
	cout << " Total Amount after GST " << GST(b) << endl;
	}
	else
	{	
	Patient a (patientId, patientName,bedtype, Days);
	cout<< endl << " Amount after Discount = " <<a.getBillAmount() << endl;
	cout << " Total Amount after GST " << GST(a) << endl;
	}
}

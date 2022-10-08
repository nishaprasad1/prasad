#include "InHousePatient.h"

InHousePatient::InHousePatient() {
	discount=5;
}
InHousePatient::InHousePatient(int patientId, string patientName, int bedType, int noOfDays, float dis): Patient(patientId, patientName, bedType, noOfDays){
	discount=dis;
}
float InHousePatient::getDiscount(){
	return discount;
}
void InHousePatient::setDiscount(float dis){
	discount=dis;
}
double InHousePatient::getBillAmount(){
	double amount=Patient::getBillAmount();
	if(amount>5000)
		amount-=discount*amount/100;
	else
		amount-=5*amount/100;//by default 5% discount
	return amount;
}
int main(){
	//cretaed default object of type Patient
	Patient p1;
	p1.displayDetails();
	cout<<"****************\n\n";

	//created parameterized object of type InhousePatient
	InHousePatient i1(206,"Ms Smith", 1, 15, 7.5);
	i1.displayDetails();
}

#include "Patient.h"
#include <iostream>

using namespace std;
	//child class             base class
class InHousePatient : public Patient{
private:
	float discount;
public:
	InHousePatient();//default constructor
	InHousePatient(int patientId, string patientName, int bedType, int noOfDays, float discount);
	virtual ~InHousePatient(){
		cout<<"destroyed InHousePatient "<<Patient::getPatientName()<<" \n";
	}
	//getters
	float getDiscount();

	//setters
	void setDiscount(float dis);

	//utility
	double getBillAmount();
};

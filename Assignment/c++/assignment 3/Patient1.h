#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
	int patientId;
	string patientName;
	int bedType;
	int noOfDays;
public:
	Patient();//default constructor
	Patient(int patientId, string patientName, int bedType, int noOfDays);//parameterized constructor
	virtual ~Patient(){//destructor
		cout<<"destroyed Patient "<<getPatientName()<<" \n";
	}

	//getters
	int getPatientId();
	string getPatientName();
	int getBedType();
	int getNoOfDays();

	//setters
	void setPatientId(int id);
	void getPatientName(string name);
	void setBedType(int bedType);
	void setNoOfDays(int noOfDays);

	//utility methods
	virtual double getBillAmount(){//virtual methods needs to be defined in class only.
		double amount=0;
		if(bedType==1)
			amount=noOfDays*500;
		else if(bedType==2)
			amount=noOfDays*350;
		else
			amount=noOfDays*200;

		return amount;
	}
	void displayDetails();
};

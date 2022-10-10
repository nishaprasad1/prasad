#include <iostream>

using namespace std;

class Loan {
private:
	double principle;
	float period;
public:

	virtual ~ Loan(){
		cout<<"Loan class destructor called";
	}

	//getters
	double getPrinciple();
	float getPeriod();

	//setters
	void setPrinciple(double principle);
	void setPeriod(float period);

	//utility methods
	virtual float getRate(){
		return 10;
	}
	double getEmi();
};

class PersonalLoan : public Loan{
public:
	float getRate();
};

class HomeLoan : public Loan{
public:
	float getRate();
};

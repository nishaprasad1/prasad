#include<cstdio>
#include <iostream>

class Patient
{
  private:
	  int patientId;
	  std::string patientName;
	  int bedType;
	  int noOfDays;
public:
	  Patient()
	  {
		 patientId = 100;
		 patientName = "XYZ";
	 	 bedType = 3;
	  	 noOfDays = 2;
	  }

	  Patient(int Id,std::string Name, int btype, int Days )
	  {
		 patientId = Id;
	 	 patientName = Name;
	 	 bedType = btype;
	  	 noOfDays = Days;
	  }

	int GetpatientId()
	{
	return patientId;
	}
	void SetpatientId (int Id)
	{
	patientId = Id;
	}

	std::string GetpatientName()
	{
	return patientName;
	}

	void setpatientName(std ::string Name)
	{
	patientName = Name;

	}
	int GetbedType()
	{
	return bedType ;
	}
	void SetbedType (int btype)
	{
	bedType = btype;
	}

	int GetnoOfDays()
	{	
	return noOfDays ;
	}

	void SetnoOfDays (int Days)
	{	
          noOfDays = Days;
	}

	virtual double getBillAmount()
	{
		double amount = 0;
	//	double price = 0;
		
	if (bedType == 1)
		amount = noOfDays * 500;
	if (bedType == 2)
		amount = noOfDays * 350;
	if (bedType == 3)
		amount = noOfDays * 200;

	return amount;
       	
	}
};

class Inhousepatient : public Patient
{
 private:
	 float discount;
 public:
	 double GetDiscount()
	 {
		 return discount;
	 }
	 void SetDiscount(float disc)
	 {
		 discount = disc;
	 }
	 

	 Inhousepatient(int patientId, std::string patientName, int bedType,int noOfDays, float discount) : Patient(patientId,patientName,bedType,noOfDays)
	 {
		 this->discount = discount;
	 }

	 double getBillAmount()

	 {
		 double amt=0;

		 amt  = Patient::getBillAmount();
		 if (amt> 5000)
		{
			return amt - amt * (discount /100);
		}
		 else
		 {
			return amt - amt * 0.05;
		 }
		 //return amt;
	 }


};

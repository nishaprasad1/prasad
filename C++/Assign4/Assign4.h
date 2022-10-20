#include <iostream>

class Loan
{

public:

	virtual float GetRate() = 0;
	float GetEMI(double principle, float period)
	{	
		float emi;
		emi = principle * (1 + GetRate() * period / 100)/ (12 * period);
		return emi;
	
	}

	double GetPrinciple()
	{
		return principle;
	}
	void SetPrinciple(double p)
	{
		principle = p;
	}
	float GetPeriod()
	{
		return period;
	}
	void SetPeriod(float pp)
	{
		period = pp;
	}
private:
	double principle;
	float period;

};

class PersonalLoan : public Loan
{
private: 
		double principle = 10000;
		float period = 3;
public:
		PersonalLoan(double principle, float period)
		{
			this->principle = principle;
			this->period = period;
		}

		float GetRate()
		{
			float rate = 0;
			if( principle <= 500000)
				rate = 15;
			else
				rate = 16;
			return rate;
		}

/*	double GetPrinciple()
	{
		return principle;
	}
	void SetPrinciple(double p)
	{
		principle = p;
	}
	float GetPeriod()
	{
		return period;
	}
	void SetPeriod(float pp)
	{
		period = pp;
	}*/
};

class HomeLoan : public Loan
{
private: 
		double principle = 10000;
		float period = 3;
public:
		HomeLoan(double principle, float period)
		{
			this->principle = principle;
			this->period = period;
		}

		float GetRate()
		{
			float rate = 0;
			if( principle <= 2000000)
				rate = 10;
			else
				rate = 11;
			return rate;
		}
/*
	double GetPrinciple()
	{
		return principle;
	}
	void SetPrinciple(double p)
	{
		principle = p;
	}
	float GetPeriod()
	{
		return period;
	}
	void SetPeriod(float pp)
	{
		period = pp;
	}*/
};


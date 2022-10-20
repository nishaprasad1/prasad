#include<cstdio>

class Loan
{
public:
	virtual float GetRate() = 0;

/*	double GetEMI(double p, float n)
	{
		principle = p;
		period = n;
		float r = GetRate();
	}*/
	
	void Setprinciple(double principle)
	{
		this -> principle = principle;
	}
	
	double Getprinciple()
	{
		return principle;
	}

	void Setperiod(float period)
	{
		this -> period = period;
	}
	
	double Getperiod()
	{
		return period;
	}
	
	void Setlimit(double limit)
	{
		this -> limit = limit;
	}

	double Getlimit()
	{
		return limit;
	}


	double GetEMI()
	{
		double emi = 0;
		float rate = GetRate();
		emi = principle * (1 + (rate * period)/100)/(12 * period);
		
		return emi;
	}

private: 
	double principle;
	float period;
	double limit;


};

class PersonalLoan : public Loan

{

public: 
	PersonalLoan()
	{
		this -> principle = principle;
	}

	float GetRate()
	{
		float rate = 0;
	 double amount=Loan::Getprinciple();
		
		rate = amount <= 500000 ? 0.15:0.16;

		return rate;

	}


private: 
	float rate;
	double principle;
};


class HomeLoan : public Loan

{

public: 
	HomeLoan()
	{
		this -> principle = principle;
		this -> limit = limit;
	}
	float GetRate()
	{
		float rate = 0;

	 double amount=Loan::Getprinciple();
	double limit = Loan::Getlimit();
			rate = amount <= 2000000 ? 0.10:0.11;
		if (amount > limit)
		{
			rate = rate + 0.01;
		}
		return rate;
	}

private: 
	float rate;
	double principle;
	double limit;
};


class Taxable() : public Loan
{

public: 
	Taxable()
	{
		this -> emi = emi;
	}
	double GetTax()
	{
		double emitax = Loan::GetEMI();

		emitax = emitax + (0.05 * emi);

		return emitax;
	}

private: 
	double emitax;
	double emi;
};

class Discountable() : public Loan
{

public: 
	Discountable()
	{
		this -> emi = emi;
	}
	double GetDiscount()
	{
		double emidisc = Loan::GetEMI()

		emidisc = emidisc - (0.1 * emi);
		
		return emidisc;
	}

private:
	
	double emidisc;
	double emi;

};

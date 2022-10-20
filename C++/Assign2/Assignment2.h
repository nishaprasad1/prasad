#include <cstdio>

class Money
{
	public:
	Money(int r, int p) //Parameterized constructor
	{
		rupees = r + p / 100;
		paise = p % 100;
	}
	Money() //Default Constructor
	{
		rupees = 25;
		paise = 50;
	}
	Money(const Money& source) //Copy constructor
	{
		rupees = source.rupees;
		paise = source.paise;
			puts("copy constructor called");
	}

	void Print() const
	{
		printf("Total Money after Addition: Rs%d.%d\n", rupees, paise);
	}

	void Prints() const
	{
		printf("Total Money after Subtraction: Rs%d.%d\n", rupees, paise);
	}
	void Setrupees(int r)
	{
		rupees = r;
	
	}
	int Getrupees() const
	{
		return rupees;
	}
	void Setpaise(int p)
	{
		paise = p;
	}
	int Getpaise() const
	{
		return paise;
	}

	Money operator+(const Money& rhs)
	{
		return Money(rupees + rhs.rupees, paise + rhs.paise);
	}

	Money operator-(const Money& rhs)
	{
		return Money(rupees - rhs.rupees, paise - rhs.paise);
	}

	~Money()
	{
	}

private:
	int rupees;
	int paise;
};


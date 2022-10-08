#include <cstdio>

class Interval
{
public:
	Interval(int rup, int pai)
	{
		rupees = rup + pai / 100;
		paisa = pai % 100;
	}	
	//copy constructor
	Interval(const Interval& source)
	{
		rupees = source.rupees;
		paisa = source.paisa;
	}

	int cash() const
	{
		return 100 * rupees + paisa;
	}

	void Print() const
	{
		printf("%d:%02d\n", rupees, paisa);
	}

	//overloading addition(+) operator
	Interval operator+(const Interval& rhs) const
	{
		return Interval(rupees + rhs.rupees, paisa + rhs.paisa);
	}
	//overloading subbtraction(-)operator
        Interval operator-(const Interval& lhs)const
	{
		return Interval(rupees -lhs.rupees,paisa-lhs.paisa);
	}

	~Interval()
	{
	}
private:
	int rupees;
	int paisa;
};

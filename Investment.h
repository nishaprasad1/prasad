#include<cmath>
#include<cstdio>
 class Investment
{
	private: 
		int amount;
                int period;
	public:
		Investment()
		{
			amount=10000;
			period=2;
		}
	        Investment(int amt ,int yea )
		{
			amount=amt;
			period=yea;
		}
		double Get_amount()
		{
                return amount;
		}
		void Set_amount( int aa)
	        {
			
		        amount =aa;
		}
		double Get_period()
		{
			return period;
		}
		void Set_period( int pp)
		{
		
			period=pp;
		}
		double InterestRate()
		{
			double rate=0;
			if(amount<10000)
				return 8;
			if((amount>=10000) && (amount<50000))
			        return 9;
			if(amount<=50000)
				return 10;
			if(period>5)
				rate+=1;
			return rate;
		}

			double GetInterest(bool choice) 
			{
				double interest=0;
			       double amt=0;
		                double rate;
		 		puts("In Interest");

				if(choice==true)
				{
		 		        puts("In Interest");
					rate= InterestRate();
					amt =amount*pow((1+rate/100),period);
					interest=amt-amount;
				}
				else
				{
					 
					 interest=(amount*rate*period)/100;
				}
				return interest;
			}

		
                ~Investment()
		{

		}
};

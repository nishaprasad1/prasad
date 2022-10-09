namespace interest
 
{
	class loan
	{
		private :
			double principle;
			float period;
		public :
			virtual float Rate()=0;
			double Emi(double);
		double Get_Principle()
		{
			return principle;
		}	
		void Set_Principle(double p)
		{
			principle=p;
		}
		double Get_Period()
		{
			return period;
		}	
		void Set_Period(double p1)
		{
			principle=p1;
		}
	};
	class PersonalLoan : public loan
	{
		public :
			PersonalLoan(double ,float);
				double Rate();
	};
	class HomeLoan : public loan
	{
		 public :
			 HomeLoan(double,float);
				 double Rate();
	};
}

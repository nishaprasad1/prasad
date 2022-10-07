#include"Investment.h"
#include<cstdio>
int main(void)
{
		int amount1;
	        int period1;
		int choice;
		
		printf("Enter  amount1 and period1 : \t");
		scanf("%d%d",&amount1,&period1);
		printf("Enter the choice 1 amd 2 : \n");
		scanf("%d",&choice);
		
		Investment inst(amount1, period1);
		
		if(choice==1)
			
		{
			choice=true;
		}
		else
		{
			choice=false;
		}
		double res;
		res =inst.GetInterest(choice);
		printf("Interest is : %lf \n",res);
}


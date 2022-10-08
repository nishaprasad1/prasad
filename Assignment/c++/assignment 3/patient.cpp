#include<iostream>
    using namespace std;
    class patient
{
	private:
		int pid;
		char pname;
		int bedtype;
		int Days;

public:
   
   patient(int id,char name,int btype,int days)
{     int price;
	pid=id;
	pname=name;
	bedtype=btype;
	Days=days;
}
int getbillamt()
{   int price;
	if(bedtype==1)
		price=500;
	else if(bedtype==2)
		price==350;
	else if(bedtype==3)
		price=200;
	return (Days*price);
}
};    


int main()
{
       	int id,btype,days,x;

      char name;
      cout<<"enter the id,bed type,and days"<<endl;
      cin>>id>>btype>>days;
      cout<<"enter the name"<<endl;
      cin>>name;
      patient p1(id,name,btype,days);
      x=p1.getbillamt();
      cout<<"the amount is\n"<<x;
      return 0;
}
























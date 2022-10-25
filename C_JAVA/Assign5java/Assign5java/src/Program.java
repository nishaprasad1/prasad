//Program File(Main)
public class Program{

	public static void main(String[] args) {
		double principle1 =Double.parseDouble(args[0]);
		double period1 =Double.parseDouble(args[1]);


		Loan p1=new PersonalLoan(principle1,period1);
		Loan p2=new HomeLoan(principle1,period1);


		System.out.println("Emi of Personal Loan is : "+p1.Rate()+" "+p1.Emi()+" "+((Taxable)p1).getTax());
		System.out.println("Emi of Home Loan is : "+p2.Rate()+" "+p2.Emi()+" "+ ((Discountable)p2).getDiscount());
	}
}
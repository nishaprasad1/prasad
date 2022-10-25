//Home Loan class
public class HomeLoan extends Loan  implements Discountable {
	private int limit;
	HomeLoan(double principle ,double period) {
		super(principle,period);
		limit=2500000;
	}
	public float Rate() {


		if(getPrinciple()<=2000000) {
			return 10;
		}
		else if(getPrinciple()<=limit)
			return 11;
		return 12;


	}
	@Override
	public double getDiscount() {
		return Emi()*0.5;
	}


}



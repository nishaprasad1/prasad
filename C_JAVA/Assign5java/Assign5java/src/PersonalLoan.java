//Personal Loan class
public class PersonalLoan extends Loan implements Taxable {

	PersonalLoan(double principle , double period) {
		super(principle,period);
	}
	public float Rate() {

		if(getPrinciple()<=500000) {
			return 15;
		}
		return 16;
	}
	@Override
	public double getTax() {
		return 5*Emi()/100;
	}

}

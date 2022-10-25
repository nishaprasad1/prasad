//Abstract Class
public abstract class Loan{
	private double principle;
	private double period;
	public Loan(double principle,double period) {
		this.principle=principle;
		this.period=period;
	}

	public double getPrinciple () {
		return principle;
	}
	public double getPeriod () {
		return period;
	}
	public void setPrinciple(double principle) {
		this.principle=principle;

	}
	public void setperiod(double period) {
		this.period=period;
	}
	public abstract float Rate();
	public double Emi(){
		double emi=0;

		emi= principle*(1+ Rate() * period / 100) / (12 * period);
		return emi;
	}



}

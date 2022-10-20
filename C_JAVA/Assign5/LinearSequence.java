package secondcode;

public class LinearSequence implements Sequence {
	private  double current;
	private float step;

	public LinearSequence(double current,float step) {
		this.step=step;
		this.current=current;
	}
	public double next() {
		double term=current;
		current +=step;
		return term;
	}

}

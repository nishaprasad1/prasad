package secondcode;

public class PowerSequence implements Sequence, Resetable{
	private  double current;
	private float factor;

	public PowerSequence(double current,float factor) {
		this.current=current;
		this.factor=factor;
	}
	public double next() {
		double term=current;
		current *=factor;
		return term;
	}
	
	@Override
	public void reset() {
		this.current=1;
	}
}


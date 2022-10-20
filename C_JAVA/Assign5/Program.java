package secondcode;


public class Program {

	static private double Compute(Sequence seq, int count)
	{	
		if(seq instanceof Resetable)
			((Resetable) seq).reset();
		
		return seq.sum(count) / count;
	}
	public static void main(String[] args) {
		
		Sequence s1=new LinearSequence(2,5);
		Sequence s2=new PowerSequence(1,3);
		
		System.out.println("computation 1 for s1 "+Compute(s1,5));
		System.out.println("computation 1 for s2 "+Compute(s2,5));
		System.out.println("computation 2 for s1 "+Compute(s1,5));
		System.out.println("computation 2 for s2 "+Compute(s2,5));
	} 

}
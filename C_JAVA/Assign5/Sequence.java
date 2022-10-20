package secondcode;

public interface Sequence{

		double next();
	
		default double sum( int count){
			double total=0;
			int i;
			for(i=1;i<=count;++i) {
				total +=next();
			}
			return total;
		}		
		
	}






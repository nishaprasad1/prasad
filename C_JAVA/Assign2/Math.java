class Math {

	public static boolean  isEven(int x ) {
                    	if(x%2==0) {
				return true;

			}
			else 
				return false;
	}
	public static boolean isOdd( int x){
		if(x%2!=0){
			return true;
		}
		else 
			return false;
	}
	
	public static boolean isPrime(int n){

		int num = n;
	        
	       for (int i = 2; i <= num / 2; ++i) {
	        
		if (num % i == 0) {
		     return  false;
		          
		 }
	   }
		return true;
	}
	
	public static int isCountPrimes(int first, int last){
	
		int term, count = 0;

		for(term = first; term <= last; ++term)
		{
			if (isPrime(term) == true){
				count += 1;

		}
	}
		return count;
	}
	public static int isReverse(int a) {
	
		int number, reverse = 0;  
		for( number=a;number != 0; number=number/10)   
		{  
		int remainder = number % 10;  
		reverse = reverse * 10 + remainder ;

		}  
		return reverse;
	}
	public static int isDigitCount(int z1){
	
                int count=0, num=z1;

	   	 while (num != 0) {
  	         	num /= 10;
                  	 ++count;
	}
	return count;
	}



}


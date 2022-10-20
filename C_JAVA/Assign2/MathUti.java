class MathUti{

	public static void main(String[] args) {
		int x = Integer.parseInt(args[0]);
		int y= Integer.parseInt(args[1]);
		int z= Integer.parseInt(args[2]);
		System.out.printf("The number is Even:  %b%n", Math.isEven(x));
		
		System.out.printf("The number is Odd:  %b%n", Math.isOdd(x));
		
		//System.out.printf("The number is Prime:   %n", Math.isPrime(x));
			if(Math.isPrime(x)==true)
				System.out.printf("The number is prime%n");
			else 
				System.out.printf("The number is not prime%n");
				
		System.out.printf("The number of Prime nos between given integers is:  %d%n", Math.isCountPrimes(x,y));
			
		System.out.printf("The reverse of given number is  :  %d%n", Math.isReverse(z));

		System.out.printf("The number for digits in the given number is  :  %d%n", Math.isDigitCount(z));
		
	}
}


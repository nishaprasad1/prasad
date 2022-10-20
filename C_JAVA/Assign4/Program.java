import banner.*;

class Program {
	
	public static double bannerPrice( Banner info, int copies) {

		float rate = copies < 5 ? 0.8f : 0.75f;
		
		return copies * rate * info.area();
	}

	public static void main(String[] args) {
		int n = Integer.parseInt(args[0]);
		
		Banner a = new Banner(30,15);
		
		Curvedbanner b = new Curvedbanner (30,15,5);

		System.out.printf("Total price of regular banner = Rs. %.2f%n",Program.bannerPrice(a,n));
		System.out.printf("Total price of curved banner = Rs. %.2f%n",Program.bannerPrice(b,n));
	}
}


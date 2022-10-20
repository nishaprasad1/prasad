class  Employee {


	private int eid;
	private int age;
	private int hours;
	private double rate;

	//parameterized constructor
	public Employee(int eid, int age, int hours,double rate) {
		this.eid = eid;
		this.age = age;
		this.hours = hours;
		this.rate = rate;
	}
	public void printEmployee() {
	         System.out.printf("Employee id %d of age %d years old, worked for %d hours monthly.%n",eid, age, hours);
	}

	public double getNetIncome() {
		if (hours <= 180)
			return hours * rate;
		else
			return 180 * rate + ((hours-180) * 100); 
	}

}


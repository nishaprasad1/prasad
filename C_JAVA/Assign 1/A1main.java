class A1main {

	public static void main(String[] args) {
		int e = Integer.parseInt(args[0]);
		int a = Integer.parseInt(args[1]);
		int h = Integer.parseInt(args[2]);
		double r = Double.parseDouble(args[3]);

		Employee emp = new Employee(e,a,h,r);
		emp.printEmployee();
		System.out.printf("Calculated Net Income of the employee is: Rs.%.2f%n", emp.getNetIncome());
	}
}


public class Employee{
	private int empId;
	private String empName;
	private String empDesgination;
	public static int count=0;

        Employee(){

	}
	Employee(int empId,String empName,String empDesgination){
		this.empId=empId;
		this.empName=empName;
		this.empDesgination=empDesgination;
		count++;
	}
	public  int getEmpId(int empId){
		return empId;
	}
	public String getEmpName(String empEmpName){
		return empName;
	}
	public String getEmpDesgination(String empDesgination){
		return empDesgination;
	}
	//@overriding toString
	public String toString(){
        return empId+ " " + empName+ " " +empDesgination;

	}
	
        public static void main(String[] args){
	
			Employee emp1 = new Employee(101,"Ram", "PO");  
			Employee emp2 = new Employee(102,"Suyash", "SO");  
			Employee emp3 = new Employee(103,"Nisha","CEO");  
			Employee emp4 = new Employee(104,"Neha", "CLERK");
		        System.out.println ("There are " + Employee.count + " objects in this class.");
		        System.out.println (emp1);
		        System.out.println (emp2);
		        System.out.println (emp3);
		        System.out.println (emp4);

		
	}	



}

package bill;

public class Patient {

	private int patientId;
	private String patientName;
	private int bedType;
	private int noOfDays;

	public Patient(int id, String name, int btype, int nod) {
		patientId = id;
		patientName = name;
		bedType = btype;
		noOfDays = nod;
	}
	public Patient() {
		this(101, "Raj", 1, 3);
	}
	public	int GetpatientId(){

		return patientId;
        }
	public void SetpatientId (int id){
		patientId = id;						
	}

	public String GetpatientName(){
		return patientName;
	}

	public void setpatientName(String Name){
		patientName = Name;
	}
	public  int GetbedType(){
		return bedType;		
	}
 	public void SetbedType (int btype){
		bedType = btype;
		}
	public int GetnoOfDays(){	
		return noOfDays ;
	}

	public void SetnoOfDays (int Days){
	          noOfDays = Days;
	 }
	
	public double getBillAmount(){
	
		double amount = 0;
		double price = 0;
		if (bedType == 1)
			amount = noOfDays * 500;
		if (bedType == 2)
			amount = noOfDays * 350;
		if (bedType == 3)
			amount = noOfDays * 200;		
		return amount; 
	}
}

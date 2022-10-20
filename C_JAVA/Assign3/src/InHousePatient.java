package bill;

public class InHousePatient extends Patient {

	private float discount;

	public InHousePatient (int patientId, String patientName, int bedType,int noOfDays, float disc) {
		super(patientId, patientName, bedType, noOfDays);
		discount = disc;
	}
	public double GetDiscount() {
		 return discount;
	}
	public void SetDiscount(float disc) {
		 discount = disc;			
	}
	public double getBillAmount() {
		 double amt=0;	
		 amt  = super.getBillAmount();
		 if (amt> 5000){
			 return amt - amt * (discount /100);
		  }
		 else {
			 return amt - amt * 0.05;
		 }	 
	}

}


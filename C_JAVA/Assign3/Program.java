import bill.Patient;

class Program {
	
	public static void main(String[] args) {
               Patient p  = new Patient();
	       p.SetpatientId(101);
	       p.setpatientName("xyz");
	       p.SetbedType (1);
	       p.SetnoOfDays (20);

	       bill.InHousePatient i = new bill.InHousePatient(201,"XYZ",1,15,5);
	       System.out.printf("Total Amount Bill of Patient: %.2f%n", p.getBillAmount());
	       System.out.printf("Total Amount Bill Of InhousePatient:%.2f%n", i.getBillAmount());
	        
	}
		
	}

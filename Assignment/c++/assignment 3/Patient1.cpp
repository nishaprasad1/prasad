#include "Patient.h"
#include <iostream>
using namespace std;

Patient::Patient() {
	patientId=101;
	patientName="Mr. Ashok";
	bedType=2;
	noOfDays=5;
}
Patient::Patient(int id, string name, int type, int days) {
	patientId=id;
	patientName=name;
	bedType=type;
	noOfDays=days;
}
int Patient::getPatientId(){
	return patientId;
}
string Patient::getPatientName(){
	return patientName;
}
int Patient::getBedType(){
	return bedType;
}
int Patient::getNoOfDays(){
	return noOfDays;
}
void Patient::setPatientId(int id){
	patientId=id;
}
void Patient::getPatientName(string name){
	patientName=name;
}
void Patient::setBedType(int type){
	bedType=type;
}
void Patient::setNoOfDays(int days){
	noOfDays=days;
}
void Patient::displayDetails(){
	cout<<  "Patient Id: "<<patientId<<"\n"<<
			"Patient Name: "<<patientName<<"\n"<<
			"Bed Type: "<<bedType<<"\n"<<
			"No of days admitted: "<<noOfDays<<"\n";
	cout<<"Total Bill: "<<getBillAmount()<<"\n";
}

#include <iostream>
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include <vector>

using namespace std;

void testStaticBinding() {
	

	Package pack("John", "11th street, 1111", "NY", "NY", "HJS121", 1, 50, //weight, then cost per ounce
		"Jane", "Fleury, 1234", "MTRL", "QC", "H22A2A");

	OvernightPackage oPack("Jane", "Fleury, 1234", "MTRL", "QC", "H22A2A", 5, 10,
		"John", "11th street, 1111", "NY", "NY", "HJS121", 200);

	TwoDayPackage TwoPack("John Molson", "St-Catherine, 7777", "MTRL", "QC", "H123B2V", 2, 5,
		"Gina Cody", "St-Catherine, 8888", "MTRL", "QC", "H123B2A", 100);


	string result = ((pack.calculateCost() == 50) && (oPack.calculateCost() == 1050) && (TwoPack.calculateCost() == 110)) ? "Pass" : "Fail";
	//this is static binding because objects are not pointers/dynamically created
	cout << result<<endl;


}

void testDynamicBinding() {
	double totalCost = 0;
	vector<Package*> packages;


	packages.push_back(new OvernightPackage("one", "0001", "QC", "QC", "H12KAS", 1, 1, "two", "0010", "MTRL", "QC", "H123AJ", 2));
	packages.push_back(new OvernightPackage("three", "0001", "QC", "QC", "H12KAS", 2, 1, "two", "0010", "MTRL", "QC", "H123AJ", 2));
	packages.push_back(new OvernightPackage("four", "0100", "QC", "QC", "H12ASK", 2, 1, "two", "0010", "MTRL", "QC", "H123AJ", 1));
	packages.push_back(new OvernightPackage("five", "0101", "QC", "QC", "H1ASJS", 1, 10, "four", "0001", "QC", "QC", "H12KAS", 3));
	packages.push_back(new OvernightPackage("four", "0001", "QC", "QC", "H12KAS", 5, 1, "five", "0101", "QC", "QC", "H1ASJS", 3));

	packages.push_back(new TwoDayPackage("one", "0001", "QC", "QC", "H12KAS", 1, 1, "two", "0010", "MTRL", "QC", "H123AJ", 2));
	packages.push_back(new TwoDayPackage("three", "0001", "QC", "QC", "H12KAS", 2, 1, "two", "0010", "MTRL", "QC", "H123AJ", 2));
	packages.push_back(new TwoDayPackage("four", "0100", "QC", "QC", "H12ASK", 2, 1, "two", "0010", "MTRL", "QC", "H123AJ", 1));
	packages.push_back(new TwoDayPackage("five", "0101", "QC", "QC", "H1ASJS", 1, 10, "four", "0001", "QC", "QC", "H12KAS", 3));
	packages.push_back(new TwoDayPackage("four", "0001", "QC", "QC", "H12KAS", 5, 1, "five", "0101", "QC", "QC", "H1ASJS", 3));

	for (int i = 0;i<(packages.size());i++) {
		totalCost += packages[i]->calculateCost(); 
		cout << "Sender address: " << packages[i]->getSenderAddress() << endl; //problem mentions getting the address of sender and receiver
		cout << "Sender city: " << packages[i]->getSenderCity() << endl;
		cout << "Sender state: " << packages[i]->getSenderState() << endl;
		cout << "Sender ZIP: " << packages[i]->getSenderZIP() << endl<<endl;

		cout << "Receiver address: " << packages[i]->getReceiverAddress() << endl;
		cout << "Receiver city: " << packages[i]->getReceiverCity() << endl;
		cout << "Receiver state: " << packages[i]->getReceiverState() << endl;
		cout << "Receiver ZIP: " << packages[i]->getReceiverZIP() << endl<<endl;

	}
	cout << "Total Cost: " << totalCost;

	for (int i = 0; i < (packages.size()); i++) {
		delete packages[i];
	}
}


int main() {


	testStaticBinding();
	testDynamicBinding();



	return 0;
}
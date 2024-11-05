#include <iostream>
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include <string>

using namespace std;

void testStaticBinding() {
	

	Package pack("John", "11th street, 1111", "NY", "NY", "HJS121", 1, 50, //weight, then cost per ounce
		"Jane", "Fleury, 1234", "MTRL", "QC", "H22A2A");

	OvernightPackage oPack("Jane", "Fleury, 1234", "MTRL", "QC", "H22A2A", 5, 10,
		"John", "11th street, 1111", "NY", "NY", "HJS121", 200);

	TwoDayPackage TwoPack("John Molson", "St-Catherine, 7777", "MTRL", "QC", "H123B2V", 2, 5,
		"Gina Cody", "St-Catherine, 8888", "MTRL", "QC", "H123B2A", 100);

	string result = ((pack.calculateCost() == 50) && (oPack.calculateCost() == 1050) && (TwoPack.calculateCost() == 110)) ? "Pass" : "Fail";

	cout << result;


}

void testDynamicBinding() {

}


int main() {







	return 0;
}
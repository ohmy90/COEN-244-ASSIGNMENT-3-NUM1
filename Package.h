#ifndef PACKAGE_H_
#define PACKAGE_H_

#include <iostream>
using namespace std;

class Package {
public:
	Package(string n, string a, string c, string s, string z, double w, double cost) :name(n)
		, address(a), city(c), state(s), ZIP(z), weight(w), CostPerOunce(cost) {};

	virtual ~Package() {};

	virtual double calculateCost() {
		return weight * CostPerOunce;
	};

protected:

	string name, address, city, state, ZIP;
	double weight;
	double CostPerOunce;



};



#endif // !PACKAGE_H_

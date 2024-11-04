#ifndef OVERNIGHT_H_
#define OVERNIGHT_H_
#include "Package.h"



class OvernightPackage : public Package {
public:
	OvernightPackage(string n, string a, string c, string s, string z, double w, double cost, double fee)
		: Package(n, a, c, s, z, w, cost), additionalFee(fee) {};


	~OvernightPackage() {};

	double calculateCost() final override {
		return (additionalFee + CostPerOunce)* weight;

	}

private:
	double additionalFee;//per ounce

};



#endif // !OVERNIGHT_H_

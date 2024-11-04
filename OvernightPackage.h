#ifndef OVERNIGHT_H_
#define OVERNIGHT_H_
#include "Package.h"



class OvernightPackage : public Package {
public:
	OvernightPackage (const string& n, const  string& a, const  string& c, const string& s, const string& z, const double& w, const  double& cost
		, const string& N, const string& A, const  string& C, const  string& S, const  string& Z, const  double& fee)
		: Package(n, a, c, s, z, w, cost, N, A, C, S, Z), additionalFee(fee) {};


	~OvernightPackage() {};

	double calculateCost() final override {
		return (additionalFee + CostPerOunce)* weight;

	}

private:
	double additionalFee;//per ounce

};



#endif // !OVERNIGHT_H_

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string& n, const  string& a, const  string& c, const string& s, const string& z, const double& w, const  double& cost
	, const string& N, const string& A, const  string& C, const  string& S, const  string& Z, const  double& fee)
	: Package(n, a, c, s, z, w, cost, N, A, C, S, Z), additionalFee(fee) {};


OvernightPackage::~OvernightPackage() {};

double OvernightPackage::calculateCost() {
	return (additionalFee + CostPerOunce) * weight;

}
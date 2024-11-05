#include "TwoDayPackage.h"


TwoDayPackage::TwoDayPackage(const string& n, const string& a, const  string& c, const  string& s, const string& z, const double& w, const  double& cost
	, const string& N, const  string& A, const  string& C, const  string& S, const  string& Z,
	const double& fee)
	:Package(n, a, c, s, z, w, cost, N, A, C, S, Z), flatFee(fee) {};

TwoDayPackage::~TwoDayPackage() {};

double TwoDayPackage::calculateCost(){
	return flatFee + weight * CostPerOunce;
}
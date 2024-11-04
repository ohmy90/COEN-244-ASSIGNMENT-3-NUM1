#ifndef TWODAY_H_
#define TWODAY_H_

#include "Package.h"


class TwoDayPackage : public Package {

public:
	TwoDayPackage(const string& n, string& a, const  string& c, const  string& s, const string& z, const double& w, const  double& cost
		, const  string& N, const  string& A, const  string& C, const  string& S, const  string& Z,
		const double& fee)
		:Package(n, a, c, s, z, w, cost,N,A,C,S,Z), flatFee(fee) {};

	~TwoDayPackage() {};


	double calculateCost() final override {
		return flatFee + weight * CostPerOunce;
	}

private:
	double flatFee;





};



#endif // !TWODAY_H_


#ifndef TWODAY_H_
#define TWODAY_H_

#include "Package.h"


class TwoDayPackage : public Package {

public:
	TwoDayPackage(const string& n = "", const string& a = "", const  string& c = "", const  string& s = "", const string& z = "",
		const double& w=0, const  double& cost=0
		, const string& N = "", const  string& A = "", const  string& C = "", const  string& S = "", const  string& Z = "",
		const double& fee=0)
		;

	~TwoDayPackage();

	double calculateCost() final override;

private:
	double flatFee;





};



#endif // !TWODAY_H_


#ifndef OVERNIGHT_H_
#define OVERNIGHT_H_
#include "Package.h"



class OvernightPackage : public Package {
public:
	OvernightPackage(const string& n = "", const  string& a = "", const  string& c = "", const string& s = "", const string& z = ""
		, const double& w=0, const  double& cost=0
		, const string& N = "", const string& A = "", const  string& C = "", const  string& S = "", const  string& Z = "", const  double& fee=0);


	~OvernightPackage();

	double calculateCost() final override;




private:
	double additionalFee;//per ounce

};



#endif // !OVERNIGHT_H_

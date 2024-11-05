#ifndef PACKAGE_H_
#define PACKAGE_H_

#include <iostream>
using namespace std;

class Package {
public:
	Package(const string& n="", const  string& a="", const  string& c = "", const  string& s = "", const  string& z = "", //lowercase for sender
		const  double& w = 0.0, const  double& cost = 0.0 
			, const  string& N = "", const  string& A = "", const  string& C = "", const  string& S = "", const  string& Z = "" //uppercase for receiver
		) ;

	virtual ~Package();

	virtual double calculateCost();

	string getSenderName();
	string getSenderAddress();
	string getSenderCity() ;
	string getSenderState() ;
	string getSenderZIP() ;

	string getReceiverName() ;
	string getReceiverAddress() ;
	string getReceiverCity() ;
	string getReceiverState();
	string getReceiverZIP() ;


protected:

	string senderName, senderAddress, senderCity, senderState, senderZIP;
	string receiverName, receiverAddress, receiverCity, receiverState, receiverZIP;

	double weight;
	double CostPerOunce;



};



#endif // !PACKAGE_H_

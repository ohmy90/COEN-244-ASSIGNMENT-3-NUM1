#ifndef PACKAGE_H_
#define PACKAGE_H_

#include <iostream>
using namespace std;

class Package {
public:
	Package(const string& n, const  string& a, const  string& c, const  string& s, const  string& z, const  double& w, const  double& cost //lowercase for sender
			, const  string& N, const  string& A, const  string& C, const  string& S, const  string& Z //uppercase for receiver
		) :senderName(n), senderAddress(a), senderCity(c), senderState(s), senderZIP(z),
		receiverName(N), receiverAddress(A), receiverCity(C), receiverState(S), receiverZIP(Z),
		weight(w), CostPerOunce(cost) {};

	virtual ~Package() {};



	double staticCalculateCost() {
		return weight * CostPerOunce;

	}

	virtual double calculateCost() {
		return weight * CostPerOunce;
	}


protected:

	string senderName, senderAddress, senderCity, senderState, senderZIP;
	string receiverName, receiverAddress, receiverCity, receiverState, receiverZIP;

	double weight;
	double CostPerOunce;



};



#endif // !PACKAGE_H_

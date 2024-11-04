#ifndef PACKAGE_H_
#define PACKAGE_H_

#include <iostream>
using namespace std;

class Package {
public:
	Package(string& n, string& a, string& c, string& s, string& z, double& w, double& cost //lowercase for sender
			, string& N, string& A, string& C, string& S, string& Z //uppercase for receiver
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

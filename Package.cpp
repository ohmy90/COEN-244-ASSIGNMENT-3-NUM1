#include "Package.h"
using namespace std;

Package::Package(const string& n, const  string& a, const  string& c, const  string& s, const  string& z, const  double& w, const  double& cost //lowercase for sender
	, const  string& N, const  string& A, const  string& C, const  string& S, const  string& Z //uppercase for receiver
) :senderName(n), senderAddress(a), senderCity(c), senderState(s), senderZIP(z),
receiverName(N), receiverAddress(A), receiverCity(C), receiverState(S), receiverZIP(Z),
weight(w), CostPerOunce(cost) {};


Package::~Package() {};


double Package::calculateCost() {

		return weight * CostPerOunce;

}



string Package::getSenderName() { return senderName; };
string Package::getSenderAddress() { return senderAddress; };
string Package::getSenderCity() { return senderCity; };
string Package::getSenderState() { return senderState; };
string Package::getSenderZIP() { return senderZIP; };

string Package::getReceiverName() { return receiverName; };
string Package::getReceiverAddress() { return receiverAddress; };
string Package::getReceiverCity() { return receiverCity; };
string Package::getReceiverState() { return receiverState; };
string Package::getReceiverZIP() { return receiverZIP; };
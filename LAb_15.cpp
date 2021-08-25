#include <iostream>
using namespace std;

double countChange(double q=0,double d=0,double n=0,double p=0) {
	double total;
	total =((q * 25) + (d*10) + (n*5) + p ) / 100;
	return total;
}
int main() {
	int q = 10, d = 5, n = 1, p = 2;
	double x = countChange(q, d, n, p);
	cout << "You have $" << x << endl;
}

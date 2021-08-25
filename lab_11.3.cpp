#include <iostream>
using namespace std;
int main () {
	int total = 0;
	for (int x = 1; x <= 10; x++) {
		for (int xnum = x; xnum <= x*x; xnum++) {
			cout << xnum << " ";
			total = total + xnum;
		} 
		cout << "the sum is " << total;
		cout << endl;
		total = 0;
	}
	return 0;
}

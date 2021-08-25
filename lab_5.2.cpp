#include <iostream>
using namespace std;
int main () {
	double x;
	cout << "Please input the price of the item:" << endl;
	cin >> x;
	if (x<=100) {
		cout << "The new price of the item is " << x * .80 << " dollars. This saves " << x * .20 << " dollars." << endl;
	} else if (x > 100) {
		cout << "The new price of the item is " << x * .60 << " dollars. This saves " << x * .40 << " dollars." << endl;
	}
	cout << "Thank You for Shopping!" << endl;
	return 0;
}

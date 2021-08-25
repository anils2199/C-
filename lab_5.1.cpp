#include <iostream>
using namespace std;
int main () {
	double x;
	cout << "Please input the original cost of the item:"<< endl;
	cin >> x;
	if (x>=125) {
		cout << "The new cost of the item is " << x * .9 << " dollars. Which saves you " << x * .1 << " dollars, from the original price." << endl;
	} else if (x<125) {
		cout << "I am sorry,this item does not qualify for the discount and shall remain " << x << " dollars." << endl;
	}
	cout << "Thank You for shopping!"<< endl;
	return 0;
}

#include <iostream>
using namespace std;
int main () {
	int  num , total;
	cout << "Please enter the prices of the items, when you finish enter 0." << endl;
	total = 0;
	cin >> num;
	while (num != 0) {
		total = total + num;
		cout << "Next?" << endl;
		cin >> num;
	}
	cout << total << endl;
	if (total >= 100) {
		cout << "That's Expensive!" << endl;
	}
	cout << "Thank You!" << endl;
	return 0;
}

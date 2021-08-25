#include <iostream>
using namespace std;
int main () {
	int num;
	cout << "Please enter a positive number." << endl;
	cin >> num;
	while (num < 0) {
		cout << "No, try again." << endl;
		cin >> num;
	}
	for (int c = 1; c <= num ;c++) {
		if (c % 2 == 0) {
			cout << (-1 * c) << " ";
		} else {
			cout << c << " ";
		} 
	}
	return 0;
}

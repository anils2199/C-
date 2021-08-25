#include <iostream>
using namespace std;
int main ( ) {
	int x,y,z;
	cout << "Please enter the first number." << endl;
	cin >> x;
	cout << "Please enter the second number." << endl;
	cin >> y;
	cout << "Please enter the third number." << endl;
	cin >> z;
	if (x<y && y<z) {
		cout << "The numbers are increasing" << endl;
	} else if (x>y && y>z) {
		cout << "The numbers are decreasing" << endl;
	} else if (x<y && y>z) {
		cout << "The numbers do not flow" << endl;
	} else if (x>y && y<z) {
		cout << "The numbers do not flow" << endl;
	} else if (x==y||y==z||z==x) {
		cout << "Some numbers are duplicated" <<endl;
	}
	cout << "Thank You!" << endl;
	return 0;
}

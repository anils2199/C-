#include <iostream>
using namespace std;
int main () {
	int x;
	cout << "Please input an integer to be converted into binary." << endl; 
	cin >> x;
       	cout << " " << endl;
	if (x<0) {
		cout << "No!No negative numbers please."<< endl;
	} else while (x>0) {
		cout << x % 2 << endl;
		x = x / 2;
	}
	cout << " " << endl;
	cout << "Thank You." << endl;
	return 0;
}


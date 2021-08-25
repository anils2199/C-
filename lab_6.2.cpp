#include <iostream>
using namespace std;
int main () {
	int x, hold = 1;
	 cout << "Please enter the integer: " << endl;
	 cin >> x;
	 if (x < 0) {
		  cout << "No. No negative integers please." << endl;
	} else {
	 cout << "This integers factors are: " << endl;
	 while (hold <= x) {
		if (not(x % hold))
				cout << hold << " ";
		  hold++;
	}
	cout << endl;
	}
	cout << "Thank you." << endl;
	return 0;
}



#include <iostream>
using namespace std;
int main () {
	int Num , Sum;
	cout << "Please enter digit you wish to test." << endl;
	Sum = 0;
	cin >> Num;
	while (Num < 0) {
		cout << "That is a Negative number, Please enter a Positive Integer." << endl;
		cin >> Num;
	}
	while (Num > 0) {
		if (Num % 2 == 1) {
			Sum = Sum + (Num % 10); 
		}
		Num = Num / 10;
	}
	cout << Sum << endl;
	return 0;
}
	


#include <iostream>
using namespace std;

int oddLessEven (int num) {
	int Osum = 0, Esum = 0;
	while (num>0) {
		if (num % 2 == 1) {
			Osum = Osum + num % 10;
		}else {
			Esum = Esum + num % 10;
		}
		num = num /10;
	}
	return Osum - Esum;
}
int main() {
	cout << oddLessEven(23) << endl;
	cout << oddLessEven(1234) << endl; 
	cout << oddLessEven(777) << endl;
	return 0;
}




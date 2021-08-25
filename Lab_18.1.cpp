#include <iostream>
using namespace std;

int thirdDigit(int num) {
	int temp, z, v ;
	temp = 0;
	if (num < 100) {
		v = 0;
	}
	while (num > 999) {
		temp = num % 10;
		num = num / 10;
	}
	while (num < 999 && num > 100) {
		v = num - (num % 10);
		z = num - v;
		num = num / 10;
	}
	return z;
}
int main() {
	cout << thirdDigit(777) << " " << thirdDigit(2048) << " " << thirdDigit(500125) << endl;
	return 0;
}


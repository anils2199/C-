#include <iostream>
using namespace std;

int unlucky(int num) {
	int temp, z, v;
	if (num < 10) {
		v = num;
	}
	while (num > 100) {
		num = num / 10;
	}
	while (num <= 99 && num >= 10) {
		v = (num/10) + (num%10);
		num = num / 10;
	}
	if (v == 13) {
		temp = true;
	} else {
		temp = false;
	}
	return temp;
}
int main() {
	if (unlucky(6789)) cout << "Unlucky!\n"; // prints Unlucky!
	if (unlucky(6889)) cout << "Unlucky!\n"; // prints
	if (unlucky(6)) cout << "Unlucky!\n"; // prints
	if (unlucky(49)) cout << "Unlucky!\n"; // prints Unlucky!
	return 0;
}

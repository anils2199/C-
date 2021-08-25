#include <iostream> 
using namespace std;

int useRecursion(int num) {
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
	return v;
}
int main() {
	cout << useRecursion(567982) << endl; // prints 11
	cout << useRecursion(107982) << endl; // prints 1
	cout << useRecursion(7) << endl; // prints 7
	return 0;
}

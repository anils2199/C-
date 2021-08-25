#include <iostream> 
using namespace std;

void sort(int &a, int &b, int &c) {
	if (b > a) {
		int temp = b;
		b = a;
		a = temp;
	}
	if (c > a) {
		int temp = c;
		c = a;
		a = temp; 
	}
	if (c > b) {
		int temp = b;
		b = c;
		c = temp;
	}
    }

int main() {
	int a = 2, b = 7, c = 1;
	sort(a, b, c);
	cout << a << b << c << endl; // prints 721
	return 0;
}

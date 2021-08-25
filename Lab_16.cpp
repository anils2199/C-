#include <iostream>
using namespace std;

int swap2 (int num) {
	int ones, tens, x;
	ones = num - ((num/10) * 10);
	tens = num - ((num/100) *100) - ones;
	x = ((num/100) * 100) + (tens/10) + (ones*10);
	return x;
}
int main(){
	cout << swap2(1024) << endl; // prints 1042
	cout << swap2(256) << endl; // prints 265
	cout << swap2(314) << endl; // prints 341
        return 0;
}

#include <iostream>
using namespace std;

int main(){
	int data[10] = {0};
	int x;
	cout << "Enter a positive integer (at most 100): ";// I deign to test creative limits within validation
	cin >> x;
	cout << "Enter 11 single-digit integers: ";
	for (int c = 0; c < x; c++) {
		int v;
		cin >> v;
		data[v]++;
	}
	cout << "The following numbers were not entered: ";
	for (int g = 0; g < 10; g++) {
		if (data[g] == 0 ) cout << g << " ";
	}
	return 0;
}

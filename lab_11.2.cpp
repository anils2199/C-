#include <iostream>
using namespace std;
int main () {
	int n, sum;
	sum = 0;
	cout << "Please enter a number greater than 0 to you wish to test. ";
	cin >> n;
	while (n <= 0) {
	cout << "That number is not within the requested range. Please try again. ";
       	cin >> n;
	}
	for (int outcounter = 1; outcounter <= n; outcounter++) {
		for (int incounter = 1; incounter <= outcounter; incounter++) {
			cout << incounter << " ";
			sum = sum + incounter;
		}
		cout << "the sum is " << sum;
		cout << endl;
		sum = 0;
	}
	return 0;
}

#include <iostream>
using namespace std;


void TriNum (int x, int n) {
	int sum, L, S; // X and N take the space of the two variables being generated by part 5 and 4;
	if (x>n) {
		L = x;
		S = n;
	} else if (n>x) {
		L = n;
		S = x;
	}
	cout << "Triangular numbers between " << L << " and " << S << "." << endl;
	for (int outcounter = 1; outcounter <= L; outcounter++) {
		for (int incounter = 1; incounter <= outcounter; incounter++) {
			sum = sum + incounter;
		}
		if (sum <= L && sum >= S) {
			cout << sum << endl;
		}
		sum = 0;
	}
}
int main() {
	int x=0,n=19;
	TriNum (x,n);
	return 0;
}

#include <iostream>
using namespace std;
int main() {
    int num, i, count, n, psum = 0;
	cout << "Enter: ";
	cin >> n;
	for (num = 1; num <= n; num++) {
	     count = 0;
         for (i = 2; i <= (num/2); i++) {
          if (num%i == 0) {
              count++;
              break;
          }
        }
        if (count == 0 && num != 1) {
        psum = psum + num;
        }
	}
	cout << psum;
	return 0;
}
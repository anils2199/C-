#include <iostream>
using namespace std;
void primeRange(int n) {
    int num, i, count, psum = 0;
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
}

int main () {
int a = 200;
primeRange(a);
return 0;
}
#include <iostream>
using namespace std;

void number(int n) {

    int num, i, count, csum = 0;
	for (num = n; num > 0;) {
	     count = 0;
         for (i = 2; i <= ((num%10)/2); i++) {
          if ((num%10)%i == 0) {
              count++;
              break;
          }
        }
        if (count != 0 && (num%10) != 2) {
        csum = csum + (num%10);
        }
        num = num/10;
	}
	cout << csum;
}

int main() {
int c = 467;
number(c);
return 0;
}
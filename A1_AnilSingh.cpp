#include <iostream>
#include <cmath>
using namespace std;

bool ifOdd (unsigned long long x) { // True false function to test if last digit of a value is odd
	if (x%2 == 1) {
		return true;
	}else {
		return false;
	}
}

int main(){

	for (unsigned long long i = 1;;i++) { // Originally used an while loop, but had a few problems with overflow and delay
		unsigned long long SValue = i * i; // Originally used CMath library Power function, Then switched to i*i as in the Assignment
		unsigned long long TValue = SValue/10; // Int Variable was switched to Unsigned long long to cover all bases
		if (ifOdd(SValue) && ifOdd(TValue)){ // If statement to determine odd values of perfect squares
			cout << i << " is the square root of " << SValue;
			break;
		}else {
			i++;
		}
		if (i < 0 || SValue < 0) { // If statement to check if any value goes into overflow reset experienced with int variable
			cout << i << " is the square root of " << SValue << endl;
		}
	} // There is no perfect square whose last two digits are odd. 
	return 0;
}



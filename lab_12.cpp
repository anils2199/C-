#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
	int x, g;
	srand(time(0));
	g = 1;
	int n = rand () % 100 + 1;
	cout << "User... Welcome to the magical guessing game. Guess a number between 1 and 100. If your number matches mine, you win a prize!" << endl;
	cin >> x;
	while (x<1 || x>100) {
		cout << "You aren't following the rules... Where is the fun in that?"<< endl;
		cin >> x;
	}
	while (x!= n && x<100 && x>1) {
		if (x < n) {
			cout << "Too Small. Try again!" << endl;
			g++;
			cin >> x;
		} else if (x > n) {
			cout << "Too Big. Try again!" << endl;
			g++;
			cin >> x;
		}
	}
	cout << "Congrats that took " << g << " guesses. Unfortunately in the time it took you to guess we ran out of prizes. Oh no!" << endl;
	cout << "Oh Well ... See you again next time!" << endl;
	return 0;
}

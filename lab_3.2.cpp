#include <iostream>
using namespace std;
int main () {
	double width = 8.5;
	int length, sides;
	length = 11;
	sides = 2;
	cout << "The area of a Sheet of Paper is " << width * length << " square inches." << endl;
	cout << "The Perimeter of a Sheet of Paper is " << ( sides * width ) + ( sides * length) << " inches." << endl;
	return 0;
}
	

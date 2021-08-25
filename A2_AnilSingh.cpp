#include <iostream>
#include <string>
#include <fstream> // str.push_back
#include <cstring>
#include <algorithm> // reverse()

using namespace std;

string add(string a, string b) {
	std::string str; // allows the use of str.push_back, str.begin and str.end
	if(a.length() > b.length()) swap (a, b) ;
	string temp = " ";
	int a1 = a.length();
	int b1 = b.length();
	reverse(a.begin(), a.end()); // Reverse function found on cplusplus.com used to reverse strings in algorithm library http://cplusplus.com/reference/algorithm/reverse/?kw=reverse
	reverse(b.begin(), b.end());
	int hold = 0; // carry over integer
	for (int i = 0; i<a1; i++) {
		int sum = ((a[i] - '0') + (b[i] - '0') + hold);
		str.push_back (sum%10 + '0'); // adds characters to string as needed fstream library http://www.cplusplus.com/reference/string/string/push_back/
		hold = sum/10;
	}
	for (int i = a1; i<b1; i++) {
		int sum = ((b[i] - '0') + hold);
		str.push_back(sum%10 + '0');
		hold = sum/10;
	}
	if (hold) str.push_back(hold +'0');
	reverse (str.begin(), str.end());
	return str;
}

int main () {
	string a, b;
	cout << " Enter the first of two numbers you wish to add." << endl;
	cin >> a;
	cout << " Enter the second of two integers you wish to add." << endl;
	cin >> b;
	cout << a << " + " << b << " = " << add(a,b);
	return 0;
}

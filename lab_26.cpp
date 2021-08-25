#include<iostream>
#include<algorithm>
using namespace std;
string piglatin(string s){

	if(s[0] == 'a' || s[0] =='e'||s[0] == 'i' || s[0]=='o' || s[0] == 'u')
		s = s + "way";
	else
		s = s.substr(1,s.length()-1) + s[0] + "ay";
	  
	s[0] = toupper(s[0]);
	return s;   
}
int main(){
	string firstname,lastname;
	cout << "Enter your first name: ";
	cin >> firstname;
	cout << "Enter your last name: ";
	cin >> lastname;

	transform(firstname.begin(), firstname.end(), firstname.begin(), ::tolower);
	transform(lastname.begin(), lastname.end(), lastname.begin(), ::tolower);

	firstname = piglatin(firstname);
	lastname = piglatin(lastname);

	cout << firstname << " " << lastname <<endl; //Gone for a while but back now
	return 0;
}

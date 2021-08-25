#include <iostream>
using namespace std;
int main () {
	int x;
	cout << "Please enter the current Hurricane category you are experiencing/learning about." << endl;
	cin >> x;
	if (x==1) {
		cout << "Category 1 Hurricanes can experience wind speeds anywhere between 74 mph(119 km/h) to 95 mph(153 km/h)" << endl;
	} else if (x==2) {
		cout << "Category 2 Hurricanes can experience wind speeds anywhere between 96 mph(154 km/h) to 110 mph(177 km/h)" << endl;
	} else if (x==3) {
		cout << "Category 3 Hurricanes are considered Major and result in wind speeds anywhere between 111 mph(178 km/h) to 129 mph(208 km/h)" << endl;
	} else if (x==4) {
		cout << "Category 4 Hurricanes are considered Major and result in wind speeds anywhere between 130 mph(209 km/h) to 156 mph(251 km/h)" << endl;
	} else if (x==5) {
		cout << "Category 5 Hurricanes represent wind speeds upwards of 157 mph(252 km/h) and result in most framed homes being destroyed and power outages that can last months" << endl;
	} else if (x>=6) {
		cout << "(┛◉Д◉)┛彡┻━┻  . I hope there will never be a Hurricane that strong."  << endl;
	} else if (x<1) {
		cout << "Not Classified by OSHA." << endl;
	}
	return 0;
}

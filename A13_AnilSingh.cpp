#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> t[3];
	int n;
	cout << "Please enter the number of rings to move: ";
	cin >> n;
	cout << endl;
	int Initial = 0, to = 0, Ps = 1, move = 0;
	
	for(int i = n + 1; i >= 1; --i)
		t[0].push_back(i);
		t[1].push_back(n+1);
		t[2].push_back(n+1);
		
		if(n%2 == 1){
			to = 1;
			while (t[1].size() < n+1) {
				cout << "Move# " << ++move << ": Transfer ring " << Ps << " from tower " << char(Initial+'A') << " to tower " << char(to+'A') << "\n";
			  	t[to].push_back(t[Initial].back());
				t[Initial].pop_back();
			  	if (t[(to+1)%3].back() < t[(to+2)%3].back())
					Initial = (to+1)%3;
				else
					Initial = (to+2)%3;
				Ps = t[Initial].back();
				if (t[Initial].back() < t[(Initial+1)%3].back())
					to = (Initial+1)%3;
				else
					to = (Initial+2)%3;
			}
			
		}
		if(n%2 == 0){
			to = 2;
			while (t[1].size() < n+1) {
			       cout << "Move# " << ++move << ": Transfer ring " << Ps << " from tower " << char(Initial+'A') << " to tower " << char(to+'A') << "\n";
			       t[to].push_back(t[Initial].back());
			       t[Initial].pop_back();
			       if (t[(to+2)%3].back() < t[(to+1)%3].back())
				       Initial = (to+2)%3;
			       else
				       Initial = (to+1)%3;
			       Ps = t[Initial].back();
			       
			       if (t[(Initial+2)%3].back() < t[Initial].back())
				       to = (Initial+1)%3;
			       else
				       to = (Initial+2)%3;
			}
		}
		return 0;
}

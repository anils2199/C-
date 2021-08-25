#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string order(string winners) {
	string team;
	for (int c=65; c<91; c++) {
		for (int i=0;i<winners.length();i++) {
			if (winners[i] == char(c)) {
				team= team + char(c);
				break;
			}
		}
	}
	return team;
}
bool confirm(string winners) {
	int c = 0;
	for (int i = 0; i<winners.length(); i++) {
		if (winners[i]<char(65) || winners[i]>char(90)) return 0;//Honestly did not know about the existence of char(65) being A and so on
		if (winners[0] == winners[i]) c++;
	}
	string team = order(winners);
	if (winners.length()!= c * team.length()) return 0;
	else return 1;
}
double score(string winners, char team) {
	double score; 
	int sum = 0;
	int count = 0;
	for (int i = 0; i<winners.length(); i++){
		if (winners[i] == team) sum+=(i+1);
		if (winners[0] == winners[i]) count++;
	}
	score  = (double)sum/count;
	return score;
}

int main() {
	string winners, team;
	while (winners != "done") {
		cout << "Please enter race results ";
		cin >> winners;
		if (winners == "done") {
			break;
		}
		if (!confirm(winners)) {
			cout << "Failed input. Try again." << endl;
			continue;
		}
		team = order(winners);
		cout << "\nThere are " <<team.length() << " teams." << endl;
		cout << "Each team has " << winners.length()/team.length() << " runners." << endl;
		cout << '\t' << "TEAM" << '\t' << "SCORE" << endl;
		double mscore = score(winners, team[0]);
		for (char c:team) {
			double s = score(winners,c);
			cout << '\t' << c << '\t' << score(winners,c) <<endl;
			if (s<mscore) mscore =s;
		}
		cout << endl << "The Lowest score is " << mscore << endl;
	}
	return 0;
}

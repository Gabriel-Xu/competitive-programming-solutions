#include <bits/stdc++.h>
using namespace std;

string alpha="abcdefghijklmnopqrstuvwxyz";

int getscore(string s) {
	int score=0;
	for (int i=0; i<s.length(); i++) {
		for (int j=0; j<26; j++) {
			if (s[i]==alpha[j]) {
				score+=j+1;
				break;
			}
		}
	}
	return score;
}

int main() {
	int t; cin >> t;
	for (int i=0; i<t; i++) {
		string s; cin >> s;
		if (s.length()%2==0) {
			cout << "Alice " << getscore(s) << "\n";
		} else {
			int ascore, bscore;
			int op1, op2;
			op1=getscore(s.substr(0,s.length()-1));
			op2=getscore(s.substr(1,s.length()-1));
			if (op1>op2) {
				ascore=op1;
				bscore=getscore(s.substr(s.length()-1,1));
			} else {
				ascore=op2;
				bscore=getscore(s.substr(0,1));
			}
			if (ascore>bscore) {
				cout << "Alice " << ascore-bscore;
			} else {
				cout << "Bob " << bscore-ascore;
			}
			cout << "\n";
		}
	}
}
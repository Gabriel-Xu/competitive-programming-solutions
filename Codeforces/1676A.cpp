#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		for (int i=0; i<6-s.length(); i++) {
			s="0"+s;
		}
		int digits[6];
		for (int i=0; i<6; i++) {
			digits[i]=s[i];
		}
		if (digits[0]+digits[1]+digits[2]==digits[3]+digits[4]+digits[5]) cout << "YES\n";
		else cout << "NO\n";
	}
}

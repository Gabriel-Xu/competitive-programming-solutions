#include <bits/stdc++.h>
using namespace std;

string alpha="abcdefghijklmnopqrstuvwxyz";

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int a, b;
		for (int i=0; i<26; i++) {
			if (alpha[i]==s[0]) a=i;
		}
		for (int i=0; i<26; i++) {
			if (alpha[i]==s[1]) {
				b=i;
				if (b>a) b--;
			}
		}
		cout << a*25+b+1 << "\n";
	}
}

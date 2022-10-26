#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin >> q;
	while (q--) {
		string s, t;
		cin >> s >> t;
		if (t=="a") cout << 1 << "\n";
		else {
			int count=0;;
			for (int i=0; i<t.length(); i++) {
				if (t[i]=='a') {
					count++;
				}
			}
			if (count!=0) {
				cout << -1 << "\n";
			}
			else {
				long long ans = pow(2, s.length());
				cout << ans << "\n";
			}
		}
	}
}
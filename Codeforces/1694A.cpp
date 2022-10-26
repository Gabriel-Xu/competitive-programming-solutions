#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		string ans="";
		if (a>=b) {
			for (int i=0; i<b; i++) ans+="01";
			for (int i=0; i<a-b; i++) ans+="0";
		} else {
			for (int i=0; i<a; i++) ans+="10";
			for (int i=0; i<b-a; i++) ans+="1";
		}
		cout << ans << "\n";
	}
}

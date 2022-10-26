#include <bits/stdc++.h>
using namespace std;

string alpha="abcdefghijklmnopqrstuvwxyz";

int getpos(char c) {
	for (int i=0; i<26; i++) {
		if (alpha[i]==c) return i;
	}
}

int difference(string a, string b, int m) {
	int ans=0;
	for (int i=0; i<m; i++) {
		ans+=abs(getpos(a[i])-getpos(b[i]));
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		string s[n];
		for (int i=0; i<n; i++) {
			cin >> s[i];
		}
		int ans=pow(25,8);
		for (int i=0; i<n; i++) {
			for (int j=i+1; j<n; j++) {
				int temp=difference(s[i], s[j], m);
				if (temp<ans) ans=temp;
			}
		}
		cout << ans << "\n";
	}
}
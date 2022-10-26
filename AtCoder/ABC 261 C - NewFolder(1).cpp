#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	string s[n];
	for (int i=0; i<n; i++) {
		cin >> s[i];
	}
	map<string, int> a;
	for (int i=0; i<n; i++) {
		if (a.count(s[i])) {
			cout << s[i] << "(" << a[s[i]] << ")\n";
		} else {
			cout << s[i] << "\n";
		}
		if (a.count(s[i])) {
			a[s[i]]++;
		} else {
			a[s[i]]=1;
		}
	}
}

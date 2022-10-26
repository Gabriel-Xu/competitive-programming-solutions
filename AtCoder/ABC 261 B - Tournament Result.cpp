#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	string a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	bool ok=true;
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			if (a[i][j]=='-') continue;
			if (a[i][j]=='W') {
				if (a[j][i]!='L') {
					ok=false;
					break;
				}
			}
			else if (a[i][j]=='L') {
				if (a[j][i]!='W') {
					ok=false;
					break;
				}
			} else {
				if (a[j][i]!='D') {
					ok=false;
					break;
				}
			}
		}
	}
	if (ok) cout << "correct\n";
	else cout << "incorrect\n";
}

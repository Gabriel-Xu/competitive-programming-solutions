#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		bool ok=true;
		for (int i=1; i<n; i++) {
			if (a[i]%a[i-1]==0) {
				a[i]-=a[i-1]*(a[i]/a[i-1]-1);
			}
			else {
				ok=false;
				break;
			}
		}
		if (ok) cout << "YES\n";
		else cout << "NO\n";
	}
}

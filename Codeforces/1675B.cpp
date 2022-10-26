#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		int ans=0;
		for (int i=n-2; i>=0; i--) {
			if (a[i+1]==0) {
				ans=-1;
				break;
			}
			while (a[i]>=a[i+1]) {
				if (a[i]%2==1) a[i]--;
				a[i]/=2;
				ans++;
			}
		}
		cout << ans << "\n";
	}
}
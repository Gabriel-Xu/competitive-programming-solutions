#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i=0; i<n; i++) cin >> a[i];
		int ans=0;
		for (int i=1; i<n-1; i++) {
			if (a[i]>a[i-1]+a[i+1]) ans++;
		}
		cout << (k==1 ? (n%2==0 ? n/2-1 : (n-1)/2) : ans) << "\n";
	}
}

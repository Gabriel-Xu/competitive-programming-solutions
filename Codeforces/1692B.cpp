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
		for (int i=0; i<n; i++) cin >> a[i];
		sort(a, a+n);
		int ans=0;
		int temp=a[0];
		for (int i=1; i<n; i++) {
			if (a[i]==temp) ans++;
			else temp=a[i];
		}
		if (ans%2==1) ans++;
		cout << n-ans << "\n";
	}
}

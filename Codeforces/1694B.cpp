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
		string s;
		cin >> s;
		bool a[n];
		for (int i=0; i<n; i++) {
			a[i]=s[i]-'0';
		}
		long long ans=n;
		int lasti=0;
		for (int i=1; i<n; i++) {
			if (a[i]!=a[lasti]) {
				ans+=i;
				lasti=i;
			}
		}
		cout << ans << "\n";
	}
}

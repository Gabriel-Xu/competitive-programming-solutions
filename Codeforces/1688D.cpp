#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,k,i;
		cin >> n >> k;
		vector<ll> s(n+1);
		for (i=1; i<=n; i++) cin >> s[i], s[i]+=s[i-1];
		if (k>=n) {
			cout << s[n]+(2ll*k-n-1ll)*n/2 << '\n';
		}
		else {
			ll mx=s[k];
			for (i=k+1;i<=n;i++) mx=max((ll)mx, s[i]-s[i-k]);
			cout << mx+k*(k-1ll)/2 << '\n';
		}
	}
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define pb push_back
#define forn(z) for (int i=0; i<z; i++)

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int main() {
	fastIO();
	int t;
	cin >> t;
	while (t--) {
		int n, q;
		cin >> n >> q;
		vi a(n);
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		ll sum[n];
		sum[0]=a[0];
		for (int i=1; i<n; i++) {
			sum[i]=a[i]+sum[i-1];
		}
		for (int i=1; i<n; i++) {
			a[i]=max(a[i-1], a[i]);
		}
		while (q--) {
			int k;
			cin >> k;
			int i=upper_bound(a.begin(), a.end(), k)-a.begin();
			if (i<=0) cout << "0 ";
			else cout << sum[i-1] << " ";
		}
		cout << "\n";
	}
}

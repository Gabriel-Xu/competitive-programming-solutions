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
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		int odd=0, even=0;
		ll ans=0;
		for (int i=0; i<n; i++) {
			if (a[i]%2==0) even++;
			else odd++;
			ans+=a[i];
		}
		while (q--) {
			int type, x;
			cin >> type >> x;
			if (type) {
				ans+=odd*x;
				if (x%2==1) {
					odd=0;
					even=n;
				}
			}
			else {
				ans+=even*x;
				if (x%2==1) {
					odd=n;
					even=0;
				}
			}
			cout << ans << "\n";
		}
	}
}

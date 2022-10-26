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
		ll n, m;
		cin >> n >> m;
		int x[m], y[m];
		for (int i=0; i<m; i++) {
			cin >> x[i] >> y[i];
		}
		if (m<n) cout << "yes\n";
		else cout << "no\n";
	}
}

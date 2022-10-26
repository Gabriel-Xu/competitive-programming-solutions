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
	int n, k;
	cin >> n >> k;
	vi a, b;
	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		if (x!=0) a.pb(x);
	}
	for (int i=0; i<k; i++) {
		int x;
		cin >> x;
		if (x!=0) b.pb(x);
	}
	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end(), greater<int>());
	ll ans=0;
	for (int i=0; i<min(a.size(), b.size()); i++) {
		ans+=a[i]*b[i];
	}
	cout << ans << "\n";
}

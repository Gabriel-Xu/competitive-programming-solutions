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
	int n;
	cin >> n;
	ll ans=0;
	int x[n];
	int y[n];
	for (int i=0; i<n; i++) {
		cin >> x[i] >> y[i];
	}
	sort(x, x+n);
	sort(y, y+n);
	ll a[n-1], b[n-1];
	for (int i=1; i<n; i++) {
		a[i-1]=x[i]-x[i-1];
		b[i-1]=y[i]-y[i-1];
	}
	for (int i=0; i<n-1; i++) {
		ans+=a[i]*(i+1)*(n-1-i);
		ans+=b[i]*(i+1)*(n-1-i);
	}
	cout << 2*ans << "\n";
}

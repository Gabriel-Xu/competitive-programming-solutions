#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef map<int,int> mpii;
typedef map<ll,ll> mpll;
#define pb push_back
#define forn(z) for (int i=0; i<z; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
	fastIO;
	int t;
	cin >> t;
	while (t--) {
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		bool ok=false;
		for (ll i=a+1; i<=c; i++) {
			ll x=a*b/__gcd(a*b, i);
			if ((b+1)%x==0) {
				cout << i << " " << b+1 << "\n";
				ok=true;
				break;
			}
			else if (x*((b+1)/x+1)<=d) {
				cout << i << " " << x*((b+1)/x+1) << "\n";
				ok=true;
				break;
			}
		}
		if (!ok) cout << "-1 -1\n";
	}
}

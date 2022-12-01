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
#define forn(z) for(int i=0; i<z; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n, b, w, d;
		cin >> n >> b >> w >> d;
		int h[n];
		forn(n) {
			cin >> h[i];
		}
		ll ans=(w+2*b)*(n+1)*b;
		forn(n) {
			ans+=h[i]*b*2;
		}
		ans*=d;
		cout << ans << "\n";
	}
}

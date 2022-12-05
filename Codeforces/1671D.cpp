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
		int n, x;
		cin >> n >> x;
		int a[n];
		forn(n) cin >> a[i];
		int minv=2e5, maxv=0;
		ll ans=0;
		forn(n-1) {
			ans+=abs(a[i]-a[i+1]);
		}
		forn(n) {
			minv=min(a[i], minv);
			maxv=max(a[i], maxv);
		}
		if(minv>1) {
			int res=abs(1-min(a[0], a[n-1]));
			forn(n-1) {
				res=min(res, a[i]+a[i+1]-2-abs(a[i]-a[i+1]));
			}
			ans+=res;
		}
		if(maxv<x) {
			int res=abs(x-max(a[0], a[n-1]));
			forn(n-1) {
				res=min(res, 2*x-a[i]-a[i+1]-abs(a[i]-a[i+1]));
			}
			ans+=res;
		}
		cout << ans << "\n";
	}
}

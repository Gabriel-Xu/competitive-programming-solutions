#include <bits/stdc++.h>
using namespace std;
#define forn(z) for(int i=0; i<z; i++)
#define forn2(z) for(int j=0; j<z; j++)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define pb push_back
#define dbg(z, n) forn(n)cerr<<z[i]<<" \n"[i==n-1];
#define dbg2(z, n, m) forn(n)forn2(m)cerr<<z[i][j]<<" \n"[j==m-1];

int main() {
	fastIO;
	int tc;
	cin >> tc;
	while(tc--) {
		int n;
		cin >> n;
		vll k(n), h(n);
		forn(n) cin >> k[i];
		forn(n) cin >> h[i];
		ll cur=0;
		ll tot=0;
		ll ans=0;
		for(int i=n-1; i>=0; i--) {
			if(h[i]>cur) {
				tot+=h[i]-cur;
				cur=h[i];
			}
			if(i==0||k[i]-k[i-1]>=cur) {
				ans+=tot*(tot+1)/2;
				tot=0;
				cur=0;
			}
			else {
				cur-=k[i]-k[i-1];
			}
		}
		cout << ans << "\n";
	}
}

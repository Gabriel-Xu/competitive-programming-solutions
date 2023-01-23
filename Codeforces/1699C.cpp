#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define pb push_back
#define forn(z) for(int i=0; i<z; i++)
#define forn2(z) for(int j=0; j<z; j++)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define dbg(z, n) forn(n)cerr<<z[i]<<" \n"[i==n-1];
#define dbg2(z, n, m) forn(n)forn2(m)cerr<<z[i][j]<<" \n"[j==m-1];

const int mod=1e9+7;

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		forn(n) cin >> a[i];
		int b[n];
		fill(b, b+n, 0);
		int cur=n;
		forn(n) {
			if(a[i]>cur) {
				b[i]=max(b[i], cur+1);
			}
			else {
				b[i]=-1;
				cur=a[i];
			}
		}
		cur=n;
		for(int i=n-1; i>=0; i--) {
			if(a[i]>cur) {
				if(b[i]!=-1) b[i]=max(b[i], cur+1);
			}
			else {
				b[i]=-1;
				cur=a[i];
			}
		}
		bool val[n];
		fill(val, val+n, 0);	
		forn(n) if(b[i]==-1) val[a[i]]=1;
		int pre[n+1];
		pre[n]=0;
		for(int i=n-1; i>=0; i--) {
			pre[i]=pre[i+1]+val[i];
		}
		vi pos;
		forn(n) {
			if(b[i]!=-1) pos.pb(n-b[i]-pre[b[i]]);
		}
		sort(pos.begin(), pos.end());
		ll ans=1;
		forn(pos.size()) {
			ans*=(pos[i]-i);
			ans%=mod;
		}
		cout << ans << "\n";
	}
}

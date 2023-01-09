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

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		forn(n) cin >> a[i];
		int ans=3000;
		for(int i=0; i<=3000; i++) {
			int dif=0;
			bool ok=true;
			forn2(n) {
				if(i==0) {
					dif=max(dif, a[j]/min(a[j], k)-i);
				}
				else if(a[j]/i==0) {
					ok=false;
					break;
				}
				else {
					dif=max(dif, a[j]/min(k, a[j]/i)-i);
				}
			}
			if(!ok) continue;
			ans=min(ans, dif);
		}
		cout << ans << "\n";
	}
}

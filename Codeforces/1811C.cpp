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
		n--;
		vi a(n);
		forn(n) cin >> a[i];
		vi ans(n+1);
		fill(ans.begin(), ans.end(), 0);
		forn(n) {
			if(i==0||a[i]<=a[i-1]) {
				ans[i]=a[i];
			}
			else ans[i+1]=a[i];
		}
		forn(n+1) cout << ans[i] << " ";
		cout << "\n";
	}
}

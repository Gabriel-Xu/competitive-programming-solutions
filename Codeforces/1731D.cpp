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

void __print(int x) {cerr << x;}
void __print(ll x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m];
		forn(n) {
			forn2(m) cin >> a[i][j];
		}
		int ans=0;
		int l=1, r=min(n, m);
		while(l<=r) {
			int v=l+(r-l)/2;
			int p[n+1][m+1];
			memset(p, 0, sizeof(p));
			forn(n) {
				forn2(m) {
					p[i+1][j+1]=a[i][j]>=v;
				}
			}
			for(int i=1; i<=n; i++) {
				for(int j=1; j<=m; j++) {
					p[i][j]+=p[i-1][j]+p[i][j-1];
					p[i][j]-=p[i-1][j-1];
				}
			}
			bool ok=false;
			for(int i=0; i<=n-v; i++) {
				for(int j=0; j<=m-v; j++) {
					if(p[i+v][j+v]-p[i][j+v]-p[i+v][j]+p[i][j]==v*v) {
						ok=true;
					}
				}
			}
			if(ok) {
				ans=v;
				l=v+1;
			}
			else {
				r=v-1;
			}
		}
		cout << ans << "\n";
	}
}

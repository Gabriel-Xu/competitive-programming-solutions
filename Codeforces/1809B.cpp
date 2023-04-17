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
	int tc;
	cin >> tc;
	while(tc--) {
		ll n;
		cin >> n;
		if(n==1) {
			cout << "0\n";
			continue;
		}
		ll l=1, r=1e9;
		ll ans=n;
		while(l<=r) {
			ll m=l+(r-l)/2;
			if(4*m*m>=n) {
				ans=min(ans, 2*m-1);
				r=m-1;
			}
			else {
				l=m+1;
			}
		}
		l=0, r=1e9;
		while(l<=r) {
			ll m=l+(r-l)/2;
			if(1+4*m*(m+1)>=n) {
				ans=min(ans, 2*m);
				r=m-1;
			}
			else {
				l=m+1;
			}
		}
		cout << ans << "\n";
	}
}

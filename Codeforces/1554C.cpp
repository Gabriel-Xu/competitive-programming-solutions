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
		ll n, m;
		cin >> n >> m;
		ll ans=0;
		bool ok=false;
		for(int i=32; i>=0; i--) {
			int ni=(n>>i)%2;
			int mi=(m>>i)%2;
			if(mi>ni) {
				ans+=(ll)1<<i;
			}
			else if(ni>mi) {
				ok=true;
				break;
			}
		}
		if(!ok) {
			ans=0;
			forn(34) {
				if((n>>i)%2==0&&(m>>i)%2==0) {
					ans+=(ll)1<<i;
					for(int j=i+1; j<=33; j++) {
						if((n>>j)%2==0&&(m>>j)%2==1) {
							ans+=(ll)1<<j;
						}
					}
					ok=true;
					break;
				}
			}
		}
		ans=min(ans, m+1);
		cout << ans << "\n";
	}
}

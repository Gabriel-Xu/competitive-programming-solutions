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
		int n;
		cin >> n;
		vi a(n);
		bool ans=false;
		forn(n) {
			cin >> a[i];
			if(a[i]==0) ans=true;
		}
		forn(n) {
			vi aa;
			forn2(n) if(j!=i) aa.pb(a[j]);
			int n1=(n-1)/2, n2=n/2;
			set<int> b;
			forn2(1<<n1) {
				for(int k=1; k<1<<n1; k++) {
					int sum=0;
					for(int idx=0; idx<n1; idx++) {
						if((k>>idx)%2)
							sum+=aa[idx]*((j>>idx)%2?1:-1);
					}
					b.insert(sum);
					if(sum==a[i]) ans=true;
				}
			}
			forn2(1<<n2) {
				for(int k=1; k<1<<n2; k++) {
					int sum=0;
					for(int idx=0; idx<n2; idx++) {
						if((k>>idx)%2)
							sum+=aa[n1+idx]*((j>>idx)%2?1:-1);
					}
					if(b.count(a[i]-sum)||a[i]==sum) ans=true;
				}
			}
		}
		cout << (ans?"YES":"NO") << "\n";
	}
}
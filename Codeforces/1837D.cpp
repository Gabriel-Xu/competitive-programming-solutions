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
		string s;
		cin >> s;
		int depth=0;
		forn(n) {
			if(s[i]=='(') depth++;
			else depth--;
		}
		if(depth!=0) {
			cout << "-1\n";
			continue;
		}
		vi a, b;
		int d1=0, d2=0;
		forn(n) {
			if(s[i]=='(') {
				if(d2>0) {
					b.pb(i);
					d2--;
				}
				else {
					a.pb(i);
					d1++;
				}
			}
			else {
				if(d1>0) {
					a.pb(i);
					d1--;
				}
				else {
					b.pb(i);
					d2++;
				}
			}
		}
		int ans[n];
		if(a.size()==0)
			for(int x:b) ans[x]=1;
		else if(b.size()==0)
			for(int x:a) ans[x]=1;
		else {
			for(int x:a) ans[x]=1;
			for(int x:b) ans[x]=2;
		}
		cout << (a.size()==0||b.size()==0?1:2) << "\n";
		forn(n) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
}

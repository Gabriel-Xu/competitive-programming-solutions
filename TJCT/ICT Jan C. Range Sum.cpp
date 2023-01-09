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
	int n, k;
	cin >> n >> k;
	vi a(n);
	for(auto& x:a) cin >> x;
	sort(a.begin(), a.end());
	vector<pii> dif;
	forn(n-1) {
		dif.pb({a[i+1]-a[i], i});
	}
	sort(dif.begin(), dif.end());
	vi ind;
	for(int i=dif.size()-1; i>=dif.size()-k+1&&i>=0; i--) {
		ind.pb(dif[i].second);
	}
	sort(ind.begin(), ind.end(), greater<int>());
	vi cur;
	int count=0;
	forn(n) {
		cur.pb(a[i]);
		if((ind.size()>0&&i==ind.back())||i==n-1) {
			forn(cur.size()) cout << cur[i] << " ";
			cout << "\n";
			cur.clear();
			count++;
			ind.pop_back();
		}
	}
	int temp=k-count;
	while(temp--) {
		cout << "-1\n";
	}
}

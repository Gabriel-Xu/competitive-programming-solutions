#include <bits/stdc++.h>
using namespace std;
#define forn(z) for(int i=0; i<z; i++)
#define forn2(z) for(int j=0; j<z; j++)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
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
	int n, m;
	cin >> n >> m;
	int na=n/2;
	int nb=n-n/2;
	vi a(na);
	vi b(nb);
	forn(na) cin >> a[i];
	forn(nb) cin >> b[i];
	vi left, right;
	forn(1<<na) {
		ll sum=0;
		forn2(na) {
			if(i&(1<<j)) {
				sum+=a[j];
				sum%=m;
			}
		}
		left.pb(sum);
	}
	forn(1<<nb) {
		ll sum=0;
		forn2(nb) {
			if(i&(1<<j)) {
				sum+=b[j];
				sum%=m;
			}
		}
		right.pb(sum);
	}
	sort(right.begin(), right.end());
	int ans=0;
	forn(left.size()) {
		auto it=lower_bound(right.begin(), right.end(), m-left[i]);
		if(it!=right.begin()) it--;
		ans=max(ans, (left[i]+*it)%m);
		ans=max(ans, (left[i]+right.back())%m);
	}
	cout << ans << "\n";
}

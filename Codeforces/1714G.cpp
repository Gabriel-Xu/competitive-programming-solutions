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

const int mn=2e5+1;
vector<pair<int,pii>> adj[mn];
vll cur;
int ans[mn];

void dfs(int node, ll a) {
	int l=0, r=cur.size()-1;
	int res;
	while(l<=r) {
		int m=l+(r-l)/2;
		if(cur[m]<=a) {
			res=m;
			l=m+1;
		}
		else {
			r=m-1;
		}
	}
	ans[node]=res;
	for(auto& x:adj[node]) {
		cur.pb(cur.back()+x.second.second);
		dfs(x.first, a+x.second.first);
		cur.pop_back();
	}
}

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(auto& v:adj) v.clear();
		cur={0};
		for(int i=2; i<=n; i++) {
			int p, a, b;
			cin >> p >> a >> b;
			adj[p].pb({i, {a, b}});
		}
		dfs(1, 0);
		for(int i=2; i<=n; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
}

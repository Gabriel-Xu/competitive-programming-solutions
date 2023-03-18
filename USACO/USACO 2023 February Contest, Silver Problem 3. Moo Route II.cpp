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

const int inf=1e9+1;

int main() {
	fastIO;
	int n, m;
	cin >> n >> m;
	int ans[n+1];
	fill(ans, ans+n+1, inf);
	ans[1]=0;
	vector<pair<int,pii>> adj[n+1];
	forn(m) {
		int a, b, c, d;
		cin >> a >> c >> b >> d;
		adj[a].pb({c, {b,d}});
	}
	for(auto& v:adj) sort(v.begin(), v.end());
	int processed[n+1];
	int lay[n+1];
	for(int i=1; i<=n; i++) {
		processed[i]=adj[i].size();
		cin >> lay[i];
	}
	priority_queue<pii> q;
	q.push({0, 1});
	while(!q.empty()) {
		auto a=q.top();
		q.pop();
		int newv=processed[a.second];
		for(int i=processed[a.second]-1; i>=0; i--) {
			auto u=adj[a.second][i];
			int c=u.first;
			int b=u.second.first;
			int d=u.second.second;
			if(a.second==1||a.first+lay[a.second]<=c) {
				if(d<ans[b]) {
					ans[b]=d;
					q.push({d, b});
					newv=i;
				}
			}
			else break;
		}
		processed[a.second]=newv;
	}
	for(int i=1; i<=n; i++) {
		cout << (ans[i]==inf?-1:ans[i]) << "\n";
	}
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef map<int,int> mpii;
typedef map<ll,ll> mpll;
#define pb push_back
#define forn(z) for(int i=0; i<z; i++)
#define forn2(z) for(int j=0; j<z; j++)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

const int mn=2e5+1;
vector<pii> adj[mn];
bool visited[mn];
int froma[mn];
int fromb[mn];
bool isa;
int b;

void dfs(int node) {
	visited[node]=true;
	for(auto next:adj[node]) {
		if(!visited[next.first]&&next.first!=b) {
			if(isa) froma[next.first]=froma[node]^next.second;
			else fromb[next.first]=fromb[node]^next.second;
			dfs(next.first);
		}
	}
}

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n, a;
		cin >> n >> a >> b;
		for(auto& v:adj) v.clear();
		fill(froma, froma+mn, INT_MAX);
		froma[a]=0;
		fromb[b]=0;
		forn(n-1) {
			int u, v, w;
			cin >> u >> v >> w;
			adj[u].pb({v, w});
			adj[v].pb({u, w});
		}
		fill(visited, visited+mn, 0);
		isa=true;
		dfs(a);
		fill(visited, visited+mn, 0);
		isa=false;
		dfs(b);
		set<int> aset;
		for(int i=1; i<=n; i++) {
			if(froma[i]!=INT_MAX) {
				aset.insert(froma[i]);
			}
		}
		bool ans=false;
		for(int i=1; i<=n; i++) {
			if(i!=b&&aset.count(fromb[i])) {
				ans=true;
			}
		}
		cout << (ans?"YES":"NO") << "\n";
	}
}

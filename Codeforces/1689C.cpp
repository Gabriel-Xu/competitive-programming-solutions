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
#define forn(z) for (int i=0; i<z; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

const int mn=3e5+1;
int ans;
vi adj[mn];
bool visited[mn];

void dfs(int node, int depth) {
	visited[node]=true;
	int edges=adj[node].size();
	if(node!=1) edges--;
	if(edges==0) {
		ans=min(ans, 2*depth-1);
	}
	else if(edges==1) {
		ans=min(ans, 2*depth);
	}
	else {
		for(int next:adj[node]) {
			if(!visited[next]) {
				dfs(next, depth+1);
			}
		}
	}
}

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(auto& v:adj) {
			v.clear();
		}
		forn(n-1) {
			int u, v;
			cin >> u >> v;
			adj[u].pb(v);
			adj[v].pb(u);
		}
		ans=n;
		fill(visited, visited+mn, 0);
		dfs(1, 1);
		cout << n-ans << "\n";
	}
}

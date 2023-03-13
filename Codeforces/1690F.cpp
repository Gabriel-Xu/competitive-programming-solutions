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

bool visited[200];
int adj[200];
string s, path;
void dfs(int node) {
	visited[node]=true;
	path+=s[node];
	if(!visited[adj[node]]) dfs(adj[node]);
}

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n >> s;
		forn(n) {
			int x;
			cin >> x;
			adj[x-1]=i;
		}
		vll cycles;
		memset(visited, 0, sizeof(visited));
		forn(n) {
			if(!visited[i]) {
				path="";
				dfs(i);
				int m=path.size();
				for(int wid=1; wid<=m; wid++) {
					if(m%wid!=0) continue;
					bool ok=true;
					for(int j=wid; j<=m-wid; j+=wid) {
						if(path.substr(j,wid)!=path.substr(j-wid,wid)) {
							ok=false;
						}
					}
					if(ok) {
						cycles.pb(wid);
						break;
					}
				}
			}
		}
		ll ans=cycles[0];
		for(int i=1; i<cycles.size(); i++) {
			ans=ans*cycles[i]/__gcd(ans, cycles[i]);
		}
		cout << ans << "\n";
	}
}
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

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vi a[n+1];
		forn(n) {
			int x;
			cin >> x;
			a[x].pb(i);
		}
		bool ans=true;
		vector<pair<int,bool>> open;
		vi p(n), q(n);
		for(int i=n; i>=1; i--) {
			if(a[i].size()>2) ans=false;
			else if(a[i].size()==2) {
				p[a[i][0]]=i;
				open.pb({a[i][0], true});
				q[a[i][1]]=i;
				open.pb({a[i][1], false});
			}
			else if(a[i].size()==1) {
				p[a[i][0]]=i;
				q[a[i][0]]=i;
			}
			else if(a[i].size()==0) {
				if(open.size()<2) ans=false;
				else {
					if(open.back().second) {
						q[open.back().first]=i;
					}
					else {
						p[open.back().first]=i;
					}
					open.pop_back();
					if(open.back().second) {
						q[open.back().first]=i;
					}
					else {
						p[open.back().first]=i;
					}
					open.pop_back();
				}
			}
		}
		cout << (ans?"yes":"no") << "\n";
		if(ans) {
			forn(n) {
				cout << p[i] << " ";
			}
			cout << "\n";
			forn(n) {
				cout << q[i] << " ";
			}
			cout << "\n";
		}
	}
}

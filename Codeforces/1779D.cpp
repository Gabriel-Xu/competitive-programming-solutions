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
		vi a(n), b(n);
		forn(n) cin >> a[i];
		forn(n) cin >> b[i];
		int m;
		cin >> m;
		map<int, int> razors;
		forn(m) {
			int x;
			cin >> x;
			if(razors.count(x)) razors[x]++;
			else razors[x]=1;
		}
		map<int, int> need;
		set<int> val;
		bool ans=true;
		forn(n) {
			if(a[i]>b[i]) {
				if(!val.count(b[i])) {
					if(need.count(b[i])) need[b[i]]++;
					else need[b[i]]=1;
					val.insert(b[i]);
				}
			}
			else if(a[i]<b[i]) ans=false;
			auto it=val.begin();
			while(*it<b[i]&&it!=val.end()) {
				val.erase(*it);
				it++;
			}
		}
		for(auto x:need) {
			if(!razors.count(x.first)||razors[x.first]<x.second) {
				ans=false;
			}
		}
		cout << (ans?"yes":"no") << "\n";
	}
}

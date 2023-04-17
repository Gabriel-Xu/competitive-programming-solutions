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

int main() {
	fastIO;
	int tc;
	cin >> tc;
	string t="0123456789";
	while(tc--) {
		ll x;
		cin >> x;
		string s=to_string(x);
		int n=s.length();
		string ans="";
		while(x>0) {
			int v=x%9;
			if(v>=4) v++;
			ans=t[v]+ans;
			x/=9;
		}
		cout << ans << "\n";
	}
}

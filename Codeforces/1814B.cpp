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
	while(tc--) {
		int a, b;
		cin >> a >> b;
		int v=1;
		while(true) {
			int r1=a%v, r2=b%v;
			if(a/(v+1)+b/(v+1)+1+(a%(v+1)!=0)+(b%(v+1)!=0)<=
			a/v+b/v+(r1!=0)+(r2!=0)) {
				v++;
			}
			else break;
		}
		debug(v);
		int ans=v-1;
		for(int i=v; i>=1; i--) {
			ans+=a/i;
			a%=i;
		}
		for(int i=v; i>=1; i--) {
			ans+=b/i;
			b%=i;
		}
		cout << ans << "\n";
	}
}

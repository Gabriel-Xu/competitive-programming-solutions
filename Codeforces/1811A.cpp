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
	string t="0123456789";
	int tc;
	cin >> tc;
	while(tc--) {
		int n, d;
		string s;
		cin >> n >> d >> s;
		forn(n+1) {
			if(i==n) s+=t[d];
			else if(s[i]-'0'<d) {
				s=s.substr(0, i)+t[d]+s.substr(i);
				break;
			}
		}
		cout << s << "\n";
	}
}

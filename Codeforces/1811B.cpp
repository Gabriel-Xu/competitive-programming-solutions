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

int level(int x, int n) {
	n/=2;
	if(x>n) {
		return x-n;
	}
	else return n-x+1;
}

int main() {
	fastIO;
	int tc;
	cin >> tc;
	while(tc--) {
		int n, x1, x2, y1, y2;
		cin >> n >> x1 >> y1 >> x2 >> y2;
		int a=max(level(x1, n), level(y1, n));
		int b=max(level(x2, n), level(y2, n));
		cout << abs(a-b) << "\n";
	}
}

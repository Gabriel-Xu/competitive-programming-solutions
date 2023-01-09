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
		int n, k;
		cin >> n >> k;
		vi a(n);
		for(auto& x:a) cin >> x;
		int count=0;
		int cur=1;
		forn(n) {
			if(a[i]==cur) {
				cur++;
				count++;
			}
		}
		cout << ((n-count)%k==0?(n-count)/k:(n-count)/k+1) << "\n";
	}
}

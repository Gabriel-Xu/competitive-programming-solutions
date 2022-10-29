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

int main() {
	fastIO;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n+1];
		for (int i=1; i<=n; i++) {
			cin >> a[i];
		}
		vi b[n+1];
		for (int i=1; i<=n; i++) {
			if (i-a[i]>=0) b[i-a[i]].pb(a[i]);
		}
		bool dp[n+1];
		fill(dp, dp+n+1, 0);
		dp[0]=true;
		for (int i=0; i<n; i++) {
			if (!dp[i]) continue;
			if (i+a[i+1]+1<=n) {
				dp[i+a[i+1]+1]=true;
			}
			for (int j:b[i+1]) {
				if (i+j+1<=n) {
					dp[i+j+1]=true;
				}
				else break;
			}
		}
		cout << (dp[n]?"yes\n":"no\n");
	}
}
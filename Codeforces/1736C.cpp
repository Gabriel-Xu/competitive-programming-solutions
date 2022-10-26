#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define pb push_back
#define forn(z) for (int i=0; i<z; i++)

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int main() {
	fastIO();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		ll ans=1;
		ll dp[n];
		dp[0]=1;
		for (ll i=1; i<n; i++) {
			dp[i]=min(dp[i-1]+1, a[i]);
			dp[i]=min(dp[i], i+1);
			ans+=dp[i];
		}
		cout << ans << "\n";
	}
}

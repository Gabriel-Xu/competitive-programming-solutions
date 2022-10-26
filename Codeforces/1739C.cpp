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

const int mod=998244353;

ll combo(int n, int k) {
	// dp[i][j] stores iCj
	vector<vector<int>> dp(n + 1, vector<int> (k + 1, 0));
	
	// base cases described above
	for (int i = 0; i <= n; i++) {
		/*
		 * i choose 0 is always 1 since there is exactly one way 
		 * to choose 0 elements from a set of i elements 
		 * (don't choose anything)
		 */
		dp[i][0] = 1;
		/*
		 * i choose i is always 1 since there is exactly one way 
		 * to choose i elements from a set of i elements
		 * (choose every element in the set)
		 */
		if (i <= k) {
			dp[i][i] = 1; 
		}
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 1; j <= min(i, k); j++) {
			if (i != j) {  // skips over the base cases
				// uses the recurrence relation above
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % mod;
			}
		}
	}
	return dp[n][k];  // returns nCk modulo p
}

int main() {
	fastIO();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll ans=combo(n-1, n/2);
		ans%=mod;
		for (int i=2; i<n/2; i+=2) {
			ans+=combo(2*(n/2-i)-1, n/2-i);
			ans%=mod;
			ans+=combo(2*(n/2-i), n/2-i+1);
			ans%=mod;
		}
		ll tot=combo(n, n/2);
		ll ans2=tot-ans-1;
		ans2%=mod;
		if (ans2<0) ans2+=mod;
		cout << ans << " " << ans2 << " " << "1\n";
	}
}

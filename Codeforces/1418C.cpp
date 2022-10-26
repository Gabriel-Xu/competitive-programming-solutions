#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		bool a[n+1];
		for (int i=1; i<=n; i++) {
			cin >> a[i];
		}
		int dp[n+1][2];
		memset(dp, -1, sizeof(dp));
		dp[0][0]=0;
		dp[0][1]=-1;
		for (int i=0; i<n; i++) {
			if (dp[i][1]!=-1) {
				if (dp[i+1][0]==-1)	dp[i+1][0]=dp[i][1];
				else dp[i+1][0]=min(dp[i+1][0], dp[i][1]);
				if (dp[i+2][0]==-1)	dp[i+2][0]=dp[i][1];
				else dp[i+2][0]=min(dp[i+2][0], dp[i][1]);
			}
			if (dp[i][0]!=-1) {
				if (dp[i+1][1]==-1)	dp[i+1][1]=dp[i][0]+a[i+1];
				else dp[i+1][1]=min(dp[i+1][1], dp[i][0]+a[i+1]);
				if (dp[i+2][1]==-1)	dp[i+2][1]=dp[i][0]+a[i+1]+a[i+2];
				else dp[i+2][1]=min(dp[i+2][1], dp[i][0]+a[i+1]+a[i+2]);
			}
		}
		int ans=0;
		if (dp[n][0]==-1) ans=dp[n][1];
		else if (dp[n][1]==-1) ans=dp[n][0];
		else ans=min(dp[n][0], dp[n][1]);
		cout << ans << "\n";
	}
}

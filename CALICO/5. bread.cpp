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
#define forn(z) for(int i=0; i<z; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n, k, d;
		cin >> n >> k >> d;
		int b[n];
		forn(n) cin >> b[i];
		int sum[n+1];
		sum[n]=0;
		int m=n;
		for(int i=m-1; i>=0; i--) {
			if(b[i]==0) {
				sum[i]=0;
				m=i+1;
				continue;
			}
			sum[i]=sum[i+1]+b[i];
			if(i+d<m) sum[i]-=b[i+d];
		}
		int dp[k+1][n+1];
		memset(dp, 0, sizeof(dp));
		for(int i=0; i<k; i++) {
			for(int j=0; j<n; j++) {
				if(j>0) dp[i][j]=max(dp[i][j], dp[i][j-1]);
				dp[i+1][min(n,j+d)]=max(dp[i+1][min(n,j+d)], dp[i][j]+sum[j]);
			}
		}
		int ans=0;
		for(int i=0; i<=k; i++) {
			for(int j=0; j<=n; j++) {
				ans=max(ans, dp[i][j]);
			}
		}
		cout << ans << "\n";
	}
}

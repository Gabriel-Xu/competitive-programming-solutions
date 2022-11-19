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
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int dp[n+1];
	fill(dp, dp+n+1, 0);
	dp[0]=0;
	for(int i=0; i<n; i++) {
		if(dp[i]==0&&i!=0) continue;
		if(i+a<=n) dp[i+a]=max(dp[i]+1, dp[i+a]);
		if(i+b<=n) dp[i+b]=max(dp[i]+1, dp[i+b]);
		if(i+c<=n) dp[i+c]=max(dp[i]+1, dp[i+c]);
	}
	cout << dp[n] << "\n";
}

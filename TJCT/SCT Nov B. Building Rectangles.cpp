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

const int mod=1e9+7;

int main() {
	fastIO;
	int n, m;
	cin >> n >> m;
	ll dp[m+1];
	fill(dp, dp+m+1, 0);
	dp[0]=1;
	for(int i=0; i<m; i++) {
		for(int k=1; k<=n; k++) {
			if(i+k<=m) {
				dp[i+k]+=dp[i];
				dp[i+k]%=mod;
				if(n==3&&k==2) {
					dp[i+k]+=dp[i];
					dp[i+k]%=mod;
				}
			}
		}
	}
	cout << dp[m] << "\n";
}

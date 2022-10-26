#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				cin >> a[i][j];
			}
		}
		if ((m+n)%2==0) {
			cout << "no\n";
		}
		else {
			pair<int, int> dp[n][m];
			dp[0][0]={a[0][0], a[0][0]};
			for (int i=0; i<n; i++) {
				for (int j=0; j<m; j++) {
					if (i>0&&j>0) {
						auto path1=dp[i-1][j], path2=dp[i][j-1];
						dp[i][j]={min(path1.first, path2.first)+a[i][j], 
						max(path1.second, path2.second)+a[i][j]};
					}
					else if (i>0) {
						auto path=dp[i-1][j];
						dp[i][j]={path.first+a[i][j], path.second+a[i][j]};
					}
					else if (j>0) {
						auto path=dp[i][j-1];
						dp[i][j]={path.first+a[i][j], path.second+a[i][j]};
					}
				}
			}
			if (dp[n-1][m-1].first<=0&&dp[n-1][m-1].second>=0) cout << "yes\n";
			else cout << "no\n";
		}
	}
}

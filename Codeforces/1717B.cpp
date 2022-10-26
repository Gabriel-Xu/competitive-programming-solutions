#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, k, r, c;
		cin >> n >> k >> r >> c;
		bool ans[n+1][n+1];
		memset(ans, 0, sizeof(ans));
		ans[c][r]=true;
		for (int i=1; i<=n; i++) {
			if (abs(i-r)%k==0) ans[c][i]=true;
		}
		for (int i=c+1; i<=n; i++) {
			for (int j=1; j<=n; j++) {
				if (j==n) {if (ans[i-1][1]) ans[i][j]=true;}
				else if (ans[i-1][j+1]) ans[i][j]=true;
			}
		}
		for (int i=c-1; i>=1; i--) {
			for (int j=1; j<=n; j++) {
				if (j==1) {if (ans[i+1][n]) ans[i][j]=true;}
				else if (ans[i+1][j-1]) ans[i][j]=true;
			}
		}
		for (int i=1; i<=n; i++) {
			for (int j=1; j<=n; j++) {
				if (ans[i][j]) cout << "X";
				else cout << ".";
			}
			cout << "\n";
		}
	}
}

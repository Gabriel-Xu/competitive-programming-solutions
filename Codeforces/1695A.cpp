#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m];
		int maxi=0, maxj=0;
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				cin >> a[i][j];
				if (a[i][j]>a[maxi][maxj]) {
					maxi=i;
					maxj=j;
				}
			}
		}
		int h=max(maxi+1, n-maxi);
		int w=max(maxj+1, m-maxj);
		cout << h*w << "\n";
	}
}

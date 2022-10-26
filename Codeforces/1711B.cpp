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
		int a[n+1];
		for (int i=1; i<=n; i++) {
			cin >> a[i];
		}
		vector<int> pairs[n+1];
		int pairs2[m+1][2];
		for (int i=1; i<=m; i++) {
			int x, y;
			cin >> x >> y;
			pairs[x].push_back(y);
			pairs[y].push_back(x);
			pairs2[i][0]=x;
			pairs2[i][1]=y;
		}
		if (m%2==1) {
			int mina=10e4+1;
			for (int i=1; i<=n; i++) {
				if (pairs[i].size()%2==1) mina=min(a[i],mina);
			}
			for (int i=1; i<=m; i++) {
				if (pairs[pairs2[i][0]].size()%2==0&&pairs[pairs2[i][1]].size()%2==0) {
					mina=min(mina,a[pairs2[i][0]]+a[pairs2[i][1]]);
				}
			}
			cout << mina << "\n";
		} else {
			cout << "0\n";
		}
	}
}

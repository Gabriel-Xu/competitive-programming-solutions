#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int u[n];
		for (int i=0; i<n; i++) {
			cin >> u[i];
		}
		map<int, pair<int,int>> pos;
		for (int i=0; i<n; i++) {
			if (pos.count(u[i])) {
				int val1=pos[u[i]].first;
				int val2=pos[u[i]].second;
				pos[u[i]]={min(val1, i), max(val2, i)};
			}
			else {
				pos[u[i]]={i,i};
			}
		}
		while (k--) {
			int a, b;
			cin >> a >> b;
			if (pos.count(a)&&pos.count(b)&&pos[a].first<pos[b].second) cout << "yes\n";
			else cout << "no\n";
		}
	}
}

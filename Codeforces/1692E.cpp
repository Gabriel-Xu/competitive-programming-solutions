#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, s;
		cin >> n >> s;
		int a[n+1]={0};
		for (int i=1; i<=n; i++) {
			cin >> a[i];
			a[i]+=a[i-1];
		}
		if (s>a[n]) cout << "-1\n";
		else {
			int ans=n;
			for (int i=1; i<=n; i++) {
				int lo=i+1, hi=n+1;
				while (lo<hi) {
					int mid=lo+(hi-lo)/2;
					if (a[mid]-a[i-1]<=s) {
						lo=mid+1;
					}
					else {
						hi=mid;
					}
				}
				if (i+n-lo<ans) {
					ans=i+n-lo;
				}
			}
			cout << ans << "\n";
		}
	}
}

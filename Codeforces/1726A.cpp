#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		int maxn=-1;
		int min1=1000;
		for (int i=1; i<n; i++) {
			maxn=max(maxn, a[i]);
		}
		for (int i=0; i<n-1; i++) {
			min1=min(min1, a[i]);
		}
		int ans=max(maxn-a[0], a[n-1]-min1);
		for (int i=0; i<n; i++) {
			ans=max(ans, a[(i+n-1)%n]-a[i]);
		}
		cout << ans << "\n";
	}
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, q;
		cin >> n >> q;
		int a[n+1];
		int maxid;
		for (int i=1; i<=n; i++) {
			cin >> a[i];
			if (a[i]==n) {
				maxid=i;
			}
		}
		int i1=1, i2=2;
		int first[n+1];
		memset(first, 0, sizeof(first));
		while (i1<maxid&&i2<=maxid) {
			if (a[i1]>a[i2]) {
				first[i1]++;
				i2++;
			}
			else {
				first[i2]++;
				i1=i2;
				i2++;
			}
		}
		while (q--) {
			int i, k;
			cin >> i >> k;
			if (i==maxid) {
				if (i==1) cout << k << "\n";
				else cout << max(0,k-maxid+2) << "\n";
			}
			else if (k>=maxid-1) {
				cout << first[i] << "\n";
			}
			else {
				int ans=0;
				bool ok=(k>=i-1);
				for (int j=1; j<i; j++) {
					if (a[j]>a[i]) {
						ok=false;
						break;
					}
				}
				if (ok) {
					if (i!=1) ans++;
					int temp=k+2;
					for (int j=i+1; j<maxid && j<temp; j++) {
						if (a[i]>a[j]) ans++;
						else break;
					}
				}
				cout << ans << "\n";
			}
		}
	}
}

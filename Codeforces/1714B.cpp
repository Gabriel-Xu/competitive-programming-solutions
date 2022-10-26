#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		unordered_set<int> myset;
		int ans;
		for (int i=n-1; i>=0; i--) {
			if (myset.count(a[i])) {
				ans=i;
				break;
			} else {
				myset.insert(a[i]);
				if (i==0) ans=-1;
			}
		}
		cout << ans+1 << "\n";
	}
}

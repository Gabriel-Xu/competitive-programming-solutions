#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, l;
	cin >> n >> l;
	vector<int> a;
	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	double ans=a[0];
	if (l-a[n-1]>ans) ans=l-a[n-1];
	for (int i=0; i<n-1; i++) {
		if ((a[i+1]-a[i])/2.0>ans) ans=(a[i+1]-a[i])/2.0;
	}
	cout << setprecision(18) << ans << "\n";
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans=0;
		int pos=0;
		pos+=3*(n/3);
		ans+=n/3;
		if (n==1) {
			cout << "2\n";
		}
		else if (n!=pos) {
			cout << ans+1 << "\n";
		}
		else {
			cout << ans << "\n";
		}
	}
}

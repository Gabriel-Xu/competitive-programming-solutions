#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		if (k%2==1) {
			cout << "YES\n";
			for (int i=1; i<=n; i+=2) {
				cout << i << " " << i+1 << "\n";
			}
		}
		else if (k%4==2) {
			cout << "YES\n";
			for (int i=4; i<=n; i+=4) {
				cout << i-1 << " " << i << "\n";
			}
			for (int i=2; i<=n; i+=4) {
				cout << i << " " << i-1 << "\n";
			}
		}
		else cout << "NO\n";
	}
}

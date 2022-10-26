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
		cout << n << "\n";
		for (int i=0; i<n; i++) {
			for (int j=0; j<i; j++) {
				cout << j+2 << " ";
			}
			cout << "1 ";
			for (int j=i+1; j<n; j++) {
				cout << j+1 << " ";
			}
			cout << "\n";
		}
	}
}

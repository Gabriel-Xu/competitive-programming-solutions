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
		int n, m;
		cin >> n >> m;
		if (m%n==0) {
			cout << "yes\n";
			for (int i=0; i<n; i++) {
				cout << m/n << " ";
			}
			cout << "\n";
		}
		else if (n%2==1&&m>n) {
			cout << "yes\n";
			for (int i=0; i<n-1; i++) {
				cout << "1 ";
			}
			cout << m-n+1 << "\n";
		}
		else if (n%2==0&&m%2==0&&m>n) {
			cout << "yes\n";
			for (int i=0; i<n-2; i++) {
				cout << "1 ";
			}
			cout << (m-n+2)/2 << " " << (m-n+2)/2 << "\n";
		}
		else cout << "no\n"; 
	}
}

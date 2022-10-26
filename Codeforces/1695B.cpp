#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

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
		if (n%2==1) cout << "Mike\n";
		else {
			int min1=1e9+1;
			int min2=1e9+1;
			int min1i, min2i;
			for (int i=0; i<n; i++) {
				if (i%2==0) {
					if (a[i]<min1) min1=a[i], min1i=i;
				}
				else {
					if (a[i]<min2) min2=a[i], min2i=i;
				}
			}
			if (min1>min2) {
				cout << "Mike\n";
			}
			else if (min1==min2) {
				if (min1i>min2i) cout << "Mike\n";
				else cout << "Joe\n";
			}
			else cout << "Joe\n";
		}
	}
}

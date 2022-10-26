#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n], b[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		for (int i=0; i<n; i++) {
			cin >> b[i];
		}
		bool ans=true;
		for (int i=0; i<n; i++) {
			if (a[i]>b[i]) ans=false;
		}
		for (int i=0; i<n; i++) {
			if (a[i]!=b[i]&&b[i]>b[(i+1)%n]+1) ans=false;
		}
		if (ans) cout << "yes\n";
		else cout << "no\n";
	}
}

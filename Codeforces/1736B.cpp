#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define pb push_back
#define forn(z) for (int i=0; i<z; i++)

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int main() {
	fastIO();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		bool ans=true;
		for (int i=0; i<n-2; i++) {
			bool ok=true;
			for (int j=2; j<=a[i]&&j<=a[i+2]; j++) {
				if (a[i]%j==0&&a[i+2]%j==0&&a[i+1]%j!=0) {
					ok=false;
					break;
				}
			}
			if (!ok) {
				ans=false;
				break;
			}
		}
		if (ans) cout << "yes\n";
		else cout << "no\n";
	}
}

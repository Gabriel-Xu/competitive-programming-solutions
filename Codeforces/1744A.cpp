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
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		string s;
		cin >> s;
		bool ans=n==s.length();
		if (ans) {
			for (int i=0; i<n; i++) {
				for (int j=0; j<n; j++) {
					if (j!=i&&a[j]==a[i]&&s[j]!=s[i]) {
						ans=false;
						break;
					}
				}
			}
		}
		if (ans) cout << "yes\n";
		else cout << "no\n";
	}
}

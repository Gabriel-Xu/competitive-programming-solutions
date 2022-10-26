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
		int b[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		for (int j=0; j<n; j++) {
			cin >> b[j];
		}
		ll ans=0;
		int maxi, maxb=-1;
		for (int i=0; i<n; i++) {
			if (b[i]>maxb) {
				maxb=b[i];
				maxi=i;
			}
		}
		for (int i=0; i<n; i++) {
			ans+=a[i];
		}
		for (int j=0; j<n; j++) {
			if (j!=maxi) {
				ans+=b[j];
			}
		}
		cout << ans << "\n";
	}
}

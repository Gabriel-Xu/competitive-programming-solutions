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
		int counta=0;
		int countb=0;
		int dif=0;
		int a[n], b[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		for (int i=0; i<n; i++) {
			cin >> b[i];
		}
		for (int i=0; i<n; i++) {
			if (a[i]) counta++;
			if (b[i]) countb++;
			dif+=a[i]!=b[i];
		}
		int ans=abs(counta-countb);
		if (dif!=ans) ans++;
		cout << ans << "\n";
	}
}

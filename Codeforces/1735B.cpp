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
		int mina=INT_MAX;
		for (int i=0; i<n; i++) {
			cin >> a[i];
			mina=min(mina, a[i]);
		}
		int ans=0;
		for (int i=0; i<n; i++) {
			if (a[i]%(mina*2-1)==0) ans+=a[i]/(mina*2-1)-1;
			else ans+=a[i]/(mina*2-1);
		}
		cout << ans << "\n";
	}
}

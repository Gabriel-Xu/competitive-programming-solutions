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
		int x[n], y[n];
		for (int i=0; i<n; i++) {
			cin >> x[i];
		}
		for (int i=0; i<n; i++) {
			cin >> y[i];
		}
		int a[n];
		for (int i=0; i<n; i++) {
			a[i]=y[i]-x[i];
		}
		vector<int> pos;
		vector<int> neg;
		for (int i=0; i<n; i++) {
			if (a[i]>=0) pos.pb(a[i]);
			else neg.pb(a[i]);
		}
		sort(pos.begin(), pos.end());
		sort(neg.begin(), neg.end(), greater<int>());
		int i1=0, i2=0;
		int ans=0;
		while (i1<pos.size()&&i2<neg.size()) {
			if (pos[i1]+neg[i2]<0) {
				i1++;
			}
			else {
				ans++;
				i1++;
				i2++;
			}
		}
		int left=(pos.size()-ans)/2;
		cout << ans+max(0,left) << "\n";
	}
}

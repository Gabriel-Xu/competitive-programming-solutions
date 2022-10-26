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
		string s;
		cin >> s;
		int n=s.length();
		int a[n];
		for (int i=0; i<n; i++) {
			a[i]=s[i]-'a';
		}
		vector<pii> pos;
		for (int i=1; i<n-1; i++) {
			if ((a[i]>=a[0]&&a[i]<=a[n-1])||(a[i]<=a[0]&&a[i]>=a[n-1])) {
				pos.pb({a[i],i+1});
			}
		}
		sort(pos.begin(), pos.end());
		cout << abs(a[0]-a[n-1]) << " " << pos.size()+2 << "\n";
		cout << "1 ";
		if (a[0]<a[n-1]) {
			for (auto x:pos) {
				cout << x.second << " ";
			}
		}
		else {
			for (int i=pos.size()-1; i>=0; i--) {
				cout << pos[i].second << " ";
			}
		}
		cout << n << "\n";
	}
}

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
		char c;
		string s;
		cin >> n >> c >> s;
		n*=2;
		s+=s;
		vi g, r;
		for (int i=0; i<s.length(); i++) {
			if (s[i]=='g') g.pb(i);
			if (s[i]==c) r.pb(i);
		}
		int ans=0;
		int gi=0, ri=0;
		while (gi<g.size() && ri<r.size()) {
			if (g[gi]<r[ri]) gi++;
			else {
				ans=max(ans, g[gi]-r[ri]);
				ri++;
			}
		}
		cout << ans << "\n";
	}
}

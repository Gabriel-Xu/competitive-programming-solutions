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
		int x;
		cin >> x;
		string s=bitset<64>(x).to_string();
		ll ans=0;
		bool start=false;
		for (int i=0; i<s.length(); i++) {
			if (s[i]=='1') start=true;
			if (start&&s[i]=='0') {
				ans++;
			}
		}
		ll res=1;
		for (int i=0; i<ans; i++) {
			res*=3;
			res%=1000000007;
		}
		if (res==1) cout << "1\n";
		else cout << (res)%1000000007 << "\n";
	}
}

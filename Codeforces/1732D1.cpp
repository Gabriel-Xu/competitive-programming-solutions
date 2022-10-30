#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef map<int,int> mpii;
typedef map<ll,ll> mpll;
#define pb push_back
#define forn(z) for (int i=0; i<z; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
	fastIO;
	int q;
	cin >> q;
	set<ll> nums;
	mpll ans;
	while (q--) {
		char c;
		ll x;
		cin >> c >> x;
		if (c=='+') {
			nums.insert(x);
		}
		else {
			ll cur;
			if (ans.count(x)) {
				cur=ans[x];
			}
			else {
				cur=x;
			}
			while (cur<=1e18) {
				if (!nums.count(cur)) break;
				else cur+=x;
			}
			ans[x]=cur;
			cout << cur << "\n";
		}
	}
}

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
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		int sum=0;
		for (int i=0; i<n; i++) {
			sum+=a[i];
		}
		ll seg=n;
		vector<pii> ans;
		bool ok=false;
		for (int i=0; i<n; i++) {
			if (((sum>0&&a[i]>0)||(sum<0&&a[i]<0))&&ok) {
				seg--;
				ans.pop_back();
				ans.pb({i, i+1});
				ok=false;
				sum-=2*a[i];
			}
			else {
				ans.pb({i+1, i+1});
				ok=true;
			}
		}
		if (sum!=0) {
			cout << "-1\n";
			continue;
		}
		cout << seg << "\n";
		for (auto x:ans) {
			cout << x.first << " " << x.second << "\n";
		}
	}
}

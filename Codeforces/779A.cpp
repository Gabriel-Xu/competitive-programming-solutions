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
	int n;
	cin >> n;
	int a[6], b[6];
	fill(a, a+6, 0);
	fill(b, b+6, 0);
	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		a[x]++;
	}
	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		b[x]++;
	}
	int ans=0;
	for (int i=1; i<=5; i++) {
		if ((a[i]+b[i])%2==1) {
			ans=-1;
			break;
		}
		else {
			ans+=abs(a[i]-(a[i]+b[i])/2);
		}
	}
	if (ans==-1) cout << ans << "\n";
	else if (ans%2==0) cout << ans/2 << "\n";
	else cout << "-1\n";
}

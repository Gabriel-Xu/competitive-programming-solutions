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
		int n, k;
		cin >> n >> k;
		int a[n+1];
		for (int i=1; i<=n; i++) {
			cin >> a[i];
		}
		ll b[n+1];
		b[0]=0;
		for (int i=1; i<=n; i++) {
			b[i]=a[i]+b[i-1]-k;
		}
		for (int i=1; i<=n; i++) {
			int cur=a[i]/2;
			int j=i-1;
			while (j>=0&&cur>0) {
				b[j]+=cur;
				cur/=2;
				j--;
			}
		}
		ll ans=-1e14;
		for (int i=0; i<=n; i++) {
			ans=max(ans, b[i]);
		}
		cout << ans << "\n";
	}
}

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
#define forn(z) for(int i=0; i<z; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int p[n+1];
		int d[n+1];
		for(int i=1; i<=n; i++) {
			cin >> p[i];
		}
		for(int i=1; i<=n-1; i++) {
			cin >> d[i+1];
		}
		cin >> d[1];
		int ans=1e6;
		for(int i=1; i<=n; i++) {
			int tot=p[i];
			for(int j=i+1; j<=n; j++) {
				tot+=d[j];
				if(p[j]>tot) {
					tot=p[j];
				}
			}
			for(int j=1; j<i; j++) {
				tot+=d[j];
				if(p[j]>tot) {
					tot=p[j];
				}
			}
			ans=min(ans, tot);
		}
		cout << ans << "\n";
	}
}

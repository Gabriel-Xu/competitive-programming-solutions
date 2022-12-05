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
#define forn2(z) for(int j=0; j<z; j++)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n];
		forn(n) {
			cin >> a[i];
		}
		int b[n][n];
		forn(n) {
			b[i][i]=0;
			for(int j=i-1; j>=0; j--) {
				b[i][j]=b[i][j+1]+(a[j]<a[i]);
			}
			for(int j=i+1; j<n; j++) {
				b[i][j]=b[i][j-1]+(a[j]<a[i]);
			}
		}
		ll ans=0;
		for(int i=1; i<n; i++) {
			for(int j=i+1; j<n-1; j++) {
				ans+=(b[j][0]-b[j][i])*(b[i][n-1]-b[i][j]);
			}
		}
		cout << ans << "\n";
	}
}

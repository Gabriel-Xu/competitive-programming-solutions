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

int n;

pii rotate(pii pos) {
	return {pos.second, n-1-pos.first};
}

int main() {
	fastIO();
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		bool a[n][n];
		for (int i=0; i<n; i++) {
			string s;
			cin >> s;
			for (int j=0; j<n; j++) {
				a[i][j]=s[j]-'0';
			}
		}
		int ans=0;
		for (int i=0; i<n; i++) {
			for (int j=0; j<n; j++) {
				if (n%2==0||n!=(n+1)/2) {
					pii cur={i, j};
					int sum=0;
					for (int k=0; k<4; k++) {
						sum+=a[cur.first][cur.second];
						cur=rotate(cur);
					}
					ans+=min(sum, 4-sum);
				}
			}
		}
		ans/=4;
		cout << ans << "\n";
	}
}

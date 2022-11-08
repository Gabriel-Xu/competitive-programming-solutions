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
		int n, q;
		cin >> n >> q;
		ll ps[1001][1001];
		memset(ps, 0, sizeof(ps));
		for (int i=0; i<n; i++) {
			int a, b;
			cin >> a >> b;
			ps[a][b]+=a*b;
		}
		for (int i=1; i<=1000; i++) {
			for (int j=1; j<=1000; j++) {
				ps[i][j]+=ps[i-1][j]+ps[i][j-1]-ps[i-1][j-1];
			}
		}
		while (q--) {
			int hs, ws, hb, wb;
			cin >> hs >> ws >> hb >> wb;
			if (hs+1==hb||ws+1==wb) {
				cout << "0\n";
				continue;
			}
			cout << ps[hb-1][wb-1]-ps[hs][wb-1]-ps[hb-1][ws]+ps[hs][ws] << "\n";
		}
	}
}

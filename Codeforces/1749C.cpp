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
		cin >> n;
		int b[101];
		memset(b, 0, sizeof(b));
		for (int i=0; i<n; i++) {
			int x;
			cin >> x;
			b[x]++;
		}
		int ans=0;
		for (int k=1; k<=n; k++) {
			int a[101];
			for (int i=1; i<=100; i++) {
				a[i]=b[i];
			}
			bool ok=true;
			for (int i=k; i>=1; i--) {
				bool found=false;
				for (int j=i; j>0; j--) {
					if (a[j]>0) {
						a[j]--;
						found=true;
						break;
					}
				}
				if (!found) {
					ok=false;
					break;
				}
				for (int j=1; j<=100; j++) {
					if (a[j]>0) {
						a[j]--;
						a[min(j+i, 100)]++;
						break;
					}
				}
			}
			if (ok) ans=k;
		}
		cout << ans << "\n";
	}
}

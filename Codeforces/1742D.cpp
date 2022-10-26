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

int gcd(int a, int b) {
    if (a==0) return b;
    return gcd(b % a, a);
}

int main() {
	fastIO();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[1001];
		memset(a, -1, sizeof(a));
		for (int i=1; i<=n; i++) {
			int x;
			cin >> x;
			a[x]=max(a[x], i);
		}
		int ans=-1;
		for (int i=1; i<=1000; i++) {
			if (a[i]==-1) continue;
			for (int j=i; j<=1000; j++) {
				if (a[j]==-1) continue;
				if (gcd(i, j)<=1) {
					ans=max(ans, a[i]+a[j]);
				}
			}
		}
		cout << ans << "\n";
	}
}

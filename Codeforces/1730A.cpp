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
		int n, c;
		cin >> n >> c;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		int count[101];
		memset(count, 0, sizeof(count));
		for (int i=0; i<n; i++) {
			count[a[i]]++;
		}
		int ans=0;
		for (int i=0; i<=100; i++) {
			if (count[i]>c) {
				ans+=c;
				count[i]=0;
			}
		}
		for (int i=0; i<=100; i++) {
			ans+=count[i];
		}
		cout << ans << "\n";
	}
}

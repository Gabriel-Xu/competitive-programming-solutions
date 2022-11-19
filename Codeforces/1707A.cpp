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
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		int q2=q;
		int lose=0;
		for (int i=0; i<n; i++) {
			if (a[i]>q2) {
				lose++;
				q2--;
			}
		}
		if (q2>=0) {
			for (int i=0; i<n; i++) {
				cout << "1";
			}
			cout << "\n";
			continue;
		}
		int l=0, r=lose;
		int ansi=-1;
		while (l<=r) {
			int m=l+(r-l)/2;
			q2=q;
			int count=m;
			for (int i=0; i<n; i++) {
				if (a[i]>q2) {
					if (count>0) {
						count--;
					}
					else {
						q2--;
					}
				}
			}
			if (q2>=0) {
				ansi=m;
				r=m-1;
			}
			else {
				l=m+1;
			}
		}
		bool ans[n];
		fill(ans, ans+n, 1);
		q2=q;
		for (int i=0; i<n; i++) {
			if (a[i]>q2) {
				if (ansi>0) {
					ans[i]=0;
					ansi--;
				}
				else q2--;
			}
		}
		for (int i=0; i<n; i++) {
			cout << ans[i];
		}
		cout << "\n";
	}
}

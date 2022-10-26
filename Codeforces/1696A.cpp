#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forn(x) for(int i=0; i<x; i++)
string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, z;
		cin >> n >> z;
		int a[n];
		forn(n) cin >> a[i];
		int ans=-1;
		forn(n) {
			ans=max(ans, (a[i]|z));
		}
		cout << ans << "\n";
	}
}

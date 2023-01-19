#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define forn(z) for(int i=0; i<z; i++)

int main() {
	int n;
	cin >> n;
	ll a[n];
	forn(n) {
		cin >> a[i];
	}
	sort(a, a+n);
	ll ans=0;
	ll ans2;
	forn(n) {
		if(a[i]*(n-i)>ans) {
			ans=a[i]*(n-i);
			ans2=a[i];
		}
	}
	cout << ans << " " << ans2 << "\n";
}

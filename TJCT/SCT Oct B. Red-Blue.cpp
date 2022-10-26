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
	int n;
	cin >> n;
	char a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	int c1=0, c2=0;
	ll ans1=0, ans2=0;
	for (int i=0; i<n; i++) {
		if (a[i]=='R') {
			c1++;
			ans1+=c2;
		}
		else {
			c2++;
			ans2+=c1;
		}
	}
	cout << abs(ans1-ans2) << "\n";
}

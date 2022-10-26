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
		int even=0, odd=0;
		for (int i=0; i<n; i++) {
			int x;
			cin >> x;
			if (x%2==0) even++;
			else odd++;
		}
		bool ans;
		if (n%2==1) {
			if (odd%2==1) {
				ans=(odd+1)%4==0;
			}
			else {
				ans=odd%4==0;
			}
		}
		else {
			if (odd%2==0) {
				ans=odd%4==0;
			}
			else {
				ans=true;
			}
		}
		if (ans) cout << "Alice\n";
		else cout << "Bob\n";
	}
}

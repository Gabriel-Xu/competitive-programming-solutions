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
	int n;
	cin >> n;
	for (int i=1; i<n; i++) {
		if (n%(i+1)==0) {
			cout << "1 ";
		}
		else cout << "0 ";
	}
}

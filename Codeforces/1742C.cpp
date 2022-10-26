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
		char a[8][8];
		for (int i=0; i<8; i++) {
			string s;
			cin >> s;
			for (int j=0; j<8; j++) {
				a[i][j]=s[j];
			}
		}
		for (int i=0; i<8; i++) {
			bool same1=true;
			bool same2=true;
			for (int j=0; j<8; j++) {
				if (a[i][j]!='R') same1=false;
				if (a[j][i]!='B') same2=false;
			}
			if (same1) {
				cout << "R\n";
				break;
			}
			if (same2) {
				cout << "B\n";
				break;
			}
		}
	}
}

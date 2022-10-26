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
		int r[3], c[3];
		for (int i=0; i<3; i++) {
			cin >> r[i] >> c[i];
			r[i]=n-r[i]+1;
			c[i]=n-c[i]+1;
		}
		int row, col;
		for (int i=0; i<3; i++) {
			bool ok=true;
			for (int j=0; j<3; j++) {
				if (i!=j) {
					if (r[i]!=r[j]&&c[i]!=c[j]) ok=false;
				}
			}
			if (ok) {
				row=r[i];
				col=c[i];
			}
		}
		int x, y;
		cin >> x >> y;
		x=n-x+1;
		y=n-y+1;
		if ((row==1||row==n)&&(col==1||col==n)) {
			if (x==row||col==y) cout << "YES\n";
			else cout << "NO\n";
		}
		else if (abs(x-row)%2==1&&abs(y-col)%2==1) cout << "NO\n";
		else cout << "YES\n";
	}
}

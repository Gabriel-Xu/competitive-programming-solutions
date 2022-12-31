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
#define forn(z) for(int i=0; i<z; i++)
#define fornt(z) for(int j=0; j<z; j++)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

bool solve() {
	int n, m;
	cin >> n >> m;
	bool a[n][m];
	forn(n) {
		fornt(m) {
			char x;
			cin >> x;
			a[i][j]=(x=='*'?1:0);
		}
	}
	int b[n][m];
	memset(b, 0, sizeof(b));
	vi di={-1, -1, 1, 1};
	vi dj={-1, 1, -1, 1};
	int cmp=1;
	forn(n) {
		fornt(m) {
			if(!a[i][j]) continue;
			int count=0;
			for(int k=0; k<4; k++) {
				if(i+di[k]>=0&&i+di[k]<n&&j+dj[k]>=0&&j+dj[k]<m&&a[i+di[k]][j]&&a[i][j+dj[k]]) {
					count++;
					b[i][j]=cmp;
					b[i+di[k]][j]=cmp;
					b[i][j+dj[k]]=cmp;
				}
			}
			if(count>1) {
				return false;
			}
			else if(count==1) cmp++;
		}
	}
	forn(n) {
		fornt(m) {
			if(a[i][j]&&!b[i][j]) {
				return false;
			}
		}
	}
	forn(n-1) {
		fornt(m) {
			if(b[i][j]>0&&b[i+1][j]>0&&b[i+1][j]!=b[i][j]) {
				return false;
			}
		}
	}
	forn(n) {
		fornt(m-1) {
			if(b[i][j]>0&&b[i][j+1]>0&&b[i][j]!=b[i][j+1]) {
				return false;
			}
		}
	}
	forn(n-1) {
		fornt(m-1) {
			if(b[i][j]>0&&b[i+1][j+1]>0&&b[i][j]!=b[i+1][j+1]) {
				return false;
			}
		}
	}
	forn(n-1) {
		for(int j=1; j<m; j++) {
			if(b[i][j]>0&&b[i+1][j-1]>0&&b[i][j]!=b[i+1][j-1]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		cout << (solve()?"yes\n":"no\n");
	}
}

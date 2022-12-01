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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n, m, d;
		cin >> n >> m >> d;
		char a[n+d+1][m+d+1];
		forn(n+d+1) {
			for(int j=0; j<m+d+1; j++) {
				a[i][j]=' ';
			}
		}
		cin.ignore();
		forn(n) {
			string s;
			getline(cin, s);
			for(int j=0; j<s.length(); j++) {
				a[i][j]=s[j];
			}
		}
		char b[n+d+1][m+d+1];
		forn(n+d+1) {
			for(int j=0; j<m+d+1; j++) {
				b[i][j]=' ';
			}
		}
		for(int i=n-1; i>=0; i--) {
			for(int j=m-1; j>=0; j--) {
				if(a[i][j]=='+') {
					for(int k=1; k<=d; k++) {
						b[i+k][j+k]='\\';
					}
				}
			}
		}
		for(int i=n-1; i>=0; i--) {
			for(int j=m-1; j>=0; j--) {
				if(a[i][j]!=' ') b[i+d+1][j+d+1]=a[i][j];
			}
		}
		forn(n+d+1) {
			for(int j=0; j<m+d+1; j++) {
				if(b[i][j]!=' ') a[i][j]=b[i][j];
			}
		}
		forn(n+d+1) {
			for(int j=0; j<m+d+1; j++) {
				cout << a[i][j];
			}
			cout << "\n";
		}
	}
}

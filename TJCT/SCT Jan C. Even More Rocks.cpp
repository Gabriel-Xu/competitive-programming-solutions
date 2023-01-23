#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define pb push_back
#define forn(z) for(int i=0; i<z; i++)
#define forn2(z) for(int j=0; j<z; j++)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define dbg(z, n) forn(n)cerr<<z[i]<<" \n"[i==n-1];
#define dbg2(z, n, m) forn(n)forn2(m)cerr<<z[i][j]<<" \n"[j==m-1];

int main() {
	fastIO;
	int n;
	cin >> n;
	bool a[n], b[n];
	string s;
	cin >> s;
	forn(n) a[i]=s[i]-'0';
	cin >> s;
	forn(n) b[i]=s[i]-'0';
	int ans=0;
	forn(n-1) {
		if(a[i]!=a[i+1]&&a[i]!=b[i]&&a[i+1]!=b[i+1]) {
			ans++;
			a[i]=!a[i];
			a[i+1]=!a[i+1];
		}
	}
	forn(n) {
		if(a[i]!=b[i]) ans++;
	}
	cout << ans << "\n";
}

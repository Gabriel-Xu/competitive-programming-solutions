#include <bits/stdc++.h>
using namespace std;
#define forn(z) for(int i=0; i<z; i++)
#define forn2(z) for(int j=0; j<z; j++)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define pb push_back
#define dbg(z, n) forn(n)cerr<<z[i]<<" \n"[i==n-1];
#define dbg2(z, n, m) forn(n)forn2(m)cerr<<z[i][j]<<" \n"[j==m-1];

int main() {
	fastIO;
	int n, k;
	cin >> n >> k;
	int a[n][k];
	set<string> cards;
	forn(n) {
		string cur="";
		forn2(k) {
			cin >> a[i][j];
			cur+=to_string(a[i][j]);
		}
		cards.insert(cur);
	}
	ll ans=0;
	forn(n) {
		int count=0;
		forn2(n) {
			if(i==j) continue;
			string s="";
			for(int f=0; f<k; f++) {
				if(a[i][f]==a[j][f]) {
					s+=to_string(a[i][f]);
				}
				else {
					s+=to_string(3-a[i][f]-a[j][f]);
				}
			}
			count+=cards.count(s);
		}
		count/=2;
		ans+=count*(count-1)/2;
	}
	cout << ans;
}
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
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n];
		int b[n];
		forn(n) {
			cin >> a[i];
			b[i]=a[i];
		}
		int wins=0;
		int sum=0;
		sort(a, a+n);
		forn(n) {
			sum+=a[i];
			if(sum<=m) wins++;
			else break;
		}
		if(wins==0) {
			cout << n+1 << "\n";
			continue;
		}
		m-=b[wins];
		sum=0;
		int wins2=0;
		forn(n) {
			if(i==wins) continue;
			sum+=a[i];
			if(sum<=m) wins2++;
			else break;
		}
		int ans=n-wins;
		if(wins2<wins-1||m<0) {
			ans++;
		}
		cout << max(1, ans) << "\n";
	}
}

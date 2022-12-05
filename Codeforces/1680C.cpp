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
		string s;
		cin >> s;
		int n=s.length();
		bool a[n];
		forn(n) a[i]=s[i]=='1';
		int ans=n;
		int left0=0, rem1=0;
		forn(n) if(!a[i]) left0++;
		int b[n+1];
		b[n]=0;
		for(int i=n-1; i>=0; i--) {
			b[i]=b[i+1]+a[i];
		}
		for(int i=0; i<=n; i++) {
			if(i>0) {
				if(a[i-1]) rem1++;
				else left0--;
			}
			int res=n;
			int l=i, r=n;
			while(l<=r) {
				int m=l+(r-l)/2;
				int c1=rem1+b[m];
				int c2=left0-(n-m-b[m]);
				res=min(res, max(c1, c2));
				if(c1>=c2) l=m+1;
				else if(c1<c2) r=m-1;
			}
			ans=min(ans, res);
		}
		cout << ans << "\n";
	}
}

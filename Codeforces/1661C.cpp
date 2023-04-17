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

ll day(ll a, ll b) {
    return max(2*a-1, 2*b);
}

ll days(ll a, ll b) {
    ll ans=day(a, b);
    ll l=0, r=b;
    while(l<=r) {
        ll m=l+(r-l)/2;
        ll two=b-m;
        ll one=a+2*m;
        ans=min(ans, day(one, two));
        if(two>one) {
            l=m+1;
        }
        else {
            r=m-1;
        }
    }
    return ans;
}

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n;
        cin >> n;
        vi a(n);
        forn(n) cin >> a[i];
        int maxv=0;
        forn(n) maxv=max(maxv, a[i]);
        ll one=0, two=0;
        forn(n) {
            a[i]=maxv-a[i];
            two+=a[i]/2;
            one+=a[i]%2;
        }
        cout << min(days(one, two), days(n-one, two+one)) << "\n";
	}
}
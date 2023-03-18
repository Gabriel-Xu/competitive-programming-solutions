#include <bits/stdc++.h>
using namespace std;
#define forn(z) for(int i=0; i<z; i++)
#define forn2(z) for(int j=0; j<z; j++)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

ll dist(ll x1, ll y1, ll x2, ll y2) {
    return (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
}

int main() {
	fastIO;
	int n, q;
	cin >> n >> q;
	vector<pair<ll,pair<ll,ll>>> a(n);
	forn(n) {
		int x, y, t;
		cin >> x >> y >> t;
		a[i]={t,{x,y}};
	}
	sort(a.begin(), a.end());
	vi times(n);
	forn(n) times[i]=a[i].first;
	int tot=0;
	while(q--) {
		ll x, y, t;
		cin >> x >> y >> t;
		int i=upper_bound(times.begin(), times.end(), t)-times.begin();
		bool innocent=false;
		if(i>=1&&dist(x, y, a[i-1].second.first, a[i-1].second.second)>(t-a[i-1].first)*(t-a[i-1].first))
			innocent=true;
		if(i<n&&dist(x, y, a[i].second.first, a[i].second.second)>(a[i].first-t)*(a[i].first-t))
			innocent=true;
		tot+=innocent;
	}
	cout << tot << "\n";
}

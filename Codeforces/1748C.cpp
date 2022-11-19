#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef map<int,int> mpii;
typedef map<ll,int> mpli;
typedef map<ll,ll> mpll;
#define pb push_back
#define forn(z) for (int i=0; i<z; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
	fastIO;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		ll v[n];
		v[0]=a[0];
		for(int i=1; i<n; i++) {
			v[i]=v[i-1]+a[i];
		}
		mpli mp;
		int start=n;
		for(int i=0; i<n; i++) {
			if(a[i]==0) {
				start=i;
				break;
			}
		}
		int ans=0;
		for(int i=0; i<start; i++) {
			if(v[i]==0) ans++;
		}
		for(int i=start; i<n; i++) {
			if(mp.count(v[i])) {
				mp[v[i]]++;
			}
			else {
				mp[v[i]]=1;
			}
			if((i==n-1)||a[i+1]==0) {
				int maxv=0;
				for (auto& x:mp) {
					maxv=max(maxv, x.second);
				}
				ans+=maxv;
				mp.clear();
			}
		}
		cout << ans << "\n";
	}
}

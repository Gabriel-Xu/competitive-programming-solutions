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

const int mn=200;

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int h[n];
		int l[n];
		forn(n) cin >> h[i];
		forn(n) cin >> l[i];
		int a[mn];
		fill(a, a+mn, 0);
		for(int i=0; i<n; i++) {
			for(int j=l[i]; j<h[i]; j++) {
				a[j]++;
			}
		}
		bool ok=false;
		int c1, c2;
		for(int i=1; i<mn; i++) {
			int sum=0;
			for(int j=i; j<mn; j++) {
				sum+=a[j];
				if(sum==k) {
					ok=true;
					c1=i;
					c2=j+1;
				}
			}
		}
		if(ok) {
			cout << c1 << " " << c2 << "\n";
		}
		else {
			cout << "IMPOSSIBLE\n";
		}
	}
}

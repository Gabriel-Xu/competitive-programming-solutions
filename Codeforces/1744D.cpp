#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define pb push_back
#define forn(z) for (int i=0; i<z; i++)

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int num(int n) {
	int ans=0;
	while (n%2==0) {
		ans++;
		n/=2;
	}
	return ans;
}

int main() {
	fastIO();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		int cur=0;
		for (int i=0; i<n; i++) {
			cur+=num(a[i]);
		}
		int i=n;
		int ans=0;
		int prev=0;
		while (cur<n&&i>=1) {
			int count=n/((int)pow(2,i))-prev;
			count=max(count, 0);
			if ((n-cur)%i==0) ans+=min(count, (n-cur)/i);
			else ans+=min(count, 1+(n-cur)/i);
			prev+=count;
			cur+=count*i;
			i--;
		}
		if (cur<n) cout << "-1\n";
		else cout << ans << "\n";
	}
}

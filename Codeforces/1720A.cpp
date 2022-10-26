#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		ll e=(ll)a*d;
		ll f=(ll)b*c;
		int ans;
		int gcd1=__gcd(a,b);
		int gcd2=__gcd(c,d);
		a/=gcd1;
		b/=gcd1;
		c/=gcd2;
		d/=gcd2;
		if (a==0&&c==0) {
			ans=0;
		}
		else if (a==0||c==0) {
			ans=1;
		}
		else if (a==c&&b==d) {
			ans=0;
		}
		else if (e%f==0||f%e==0) ans=1;
		else {
			ans=2;
		}
		cout << ans << "\n";
	}
}

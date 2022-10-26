#include <bits/stdc++.h>
#include <csignal>
using namespace std;
typedef long long ll;
ll MAX=1e18;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		ll n, k, b, s;
		cin >> n >> k >> b >> s;
		ll mins=b*k;
		ll maxs=b*k+n*(k-1);
		if (s<mins||s>maxs) {
			cout << "-1\n";
		}
		else {
			ll dif=s-mins;
			for (int i=0; i<n; i++) {
				if (i==0) {
					cout << min(b*k+min(k-1,dif),MAX) << " ";
					dif-=min(b*k+min(k-1,dif),MAX)-b*k;
				}
				else {
					cout << min(dif,k-1) << " ";
					dif-=min(dif,k-1);
				}
			}
			cout << "\n";
		}
	}
}

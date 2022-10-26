#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forn(x) for(int i=0; i<x; i++)

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<pair<ll,int>> a;
		forn(n) {
			int count=1;
			int x;
			cin >> x;
			while (x%m==0) {
				count*=m;
				x/=m;
			}
		if (i>0&&a.back().second==x) a.back().first+=count;
			else a.push_back({count,x});
		}
		int k;
		cin >> k;
		vector<pair<ll,int>> b;
		forn(k) {
			int count=1;
			int x;
			cin >> x;
			while (x%m==0) {
				count*=m;
				x/=m;
			}
			if (i>0&&b.back().second==x) b.back().first+=count;
			else b.push_back({count,x});
		}
		if (a.size()==b.size()) {
			int ok=true;
			for (int i=0; i<a.size(); i++) {
				if (a[i].first!=b[i].first||a[i].second!=b[i].second) {
					ok=false;
					break;
				}
			}
			if (ok) cout << "yes\n";
			else cout << "no\n";
		}
		else {
			cout << "no\n";
		}
	}
}


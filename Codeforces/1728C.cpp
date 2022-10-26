#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define pb push_back
#define forn(z) for (int i=0; i<z; i++)

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

void reduce(vector<int>& a, vector<int>& b) {
	int i1=0, i2=0;
	vector<int> a1, b1;
	while (i1<a.size()&&i2<b.size()) {
		if (a[i1]<b[i2]) {
			a1.pb(a[i1]);
			i1++;
		}
		else if (a[i1]>b[i2]) {
			b1.pb(b[i2]);
			i2++;
		}
		else {
			i1++;
			i2++;
		}
	}
	for (int i=i1; i<a.size(); i++) {
		a1.pb(a[i]);
	}
	for (int i=i2; i<a.size(); i++) {
		b1.pb(b[i]);
	}
	a.clear();
	b.clear();
	for (int x:a1) {
		a.pb(x);
	}
	for (int x:b1) {
		b.pb(x);
	}
}

int log(vector<int>& a, vector<int>& b, int j) {
	int ans=0;
	for (int i=0; i<a.size(); i++) {
		if (a[i]!=1&&to_string(a[i]).length()==j) {
			a[i]=to_string(a[i]).length();
			ans++;
		}
		if (b[i]!=1&&to_string(b[i]).length()==j) {
			b[i]=to_string(b[i]).length();
			ans++;
		}
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	return ans;
}

int main() {
	fastIO();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a, b;
		for (int i=0; i<n; i++) {
			int x;
			cin >> x;
			a.pb(x);
		}
		for (int i=0; i<n; i++) {
			int x;
			cin >> x;
			b.pb(x);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		reduce(a, b);
		int ans=0;
		int j=9;
		while (a.size()>0) {
			ans+=log(a, b, j);
			reduce(a, b);
			j--;
		}
		cout << ans << "\n";
	}
}

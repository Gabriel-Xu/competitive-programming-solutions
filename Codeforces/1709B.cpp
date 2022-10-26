#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	int a[n];
	for (int i=0; i<n; i++) {
		cin >> a[i];
	}
	ll p1[n];
	p1[0]=0;
	for (int i=1; i<n; i++) {
		if (a[i-1]>a[i]) p1[i]=a[i-1]-a[i];
		else p1[i]=0;
	}
	for (int i=1; i<n; i++) {
		p1[i]+=p1[i-1];
	}
	ll p2[n];
	p2[n-1]=0;
	for (int i=n-2; i>=0; i--) {
		if (a[i+1]>a[i]) p2[i]=a[i+1]-a[i];
		else p2[i]=0;
	}
	for (int i=n-2; i>=0; i--) {
		p2[i]+=p2[i+1];
	}
	while (m--) {
		int s, t;
		cin >> s >> t;
		s--;
		t--;
		if (s<t) {
			cout << p1[t]-p1[s] << "\n";
		}
		else {
			cout << p2[t]-p2[s] << "\n";
		}
	}
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int scount[5]={0};
	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		scount[x]++;
	}
	int ans=scount[4];
	scount[1]-=scount[3];
	ans+=scount[3];
	ans+=scount[2]/2;
	scount[2]%=2;
	if (scount[2]==1) {
		scount[1]-=2;
		ans++;
	}
	if (scount[1]>0) {
		ans+=scount[1]/4;
		if (scount[1]%4!=0) ans++;
	}
	cout << ans << "\n";
}

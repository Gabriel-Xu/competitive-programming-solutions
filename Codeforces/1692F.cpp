#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a;
		for (int i=0; i<n; i++) {
			int x;
			cin >> x;
			a.push_back(x%10);
		}
		sort(a.begin(), a.end());
		int temp=a[0];
		int samecount=0;
		vector<int> b;
		b.push_back(a[0]);
		for (int i=1; i<a.size(); i++) {
			if (a[i]==temp) {
				samecount++;
				if (samecount<3) {
					b.push_back(a[i]);
				}
			} else {
				samecount=0;
				b.push_back(a[i]);
			}
			temp=a[i];
		}
		int ok=false;
		for (int i=0; i<b.size(); i++) {
			for (int j=i+1; j<b.size(); j++) {
				for (int k=j+1; k<b.size(); k++) {
					if ((b[i]+b[j]+b[k])%10==3) {
						ok=true;
						break;
					}
				}
			}
		}
		if (ok) cout << "yes\n";
		else cout << "no\n";
	}
}

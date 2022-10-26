#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		int pos=0;
		int neg=0;
		for (int i=0; i<n; i++) {
			cin >> a[i];
			if (a[i]>0) pos++;
			else if (a[i]<0) neg++;
		}
		if (n==3) {
			ll sum=0;
			for (int i=0; i<n; i++) sum+=a[i];
			if (a[0]==sum||a[1]==sum||a[2]==sum) cout << "yes\n";
			else cout << "no\n";
		}
		else {
			if (neg>=3||pos>=3) cout << "no\n";
			else {
				vector<int> b;
				sort(a, a+n);
				int prev=a[0];
				b.push_back(a[0]);
				int count=1;
				for (int i=1; i<n; i++) {
					if (a[i]==prev) {
						count++;
						if (count<=3) {
							b.push_back(a[i]);
						}
					}
					else {
						count=1;
						b.push_back(a[i]);
					}
					prev=a[i];
				}
				bool ok=true;
				for (int i=0; ok&&i<b.size(); i++) {
					for (int j=i+1; ok&&j<b.size(); j++) {
						for (int k=j+1; ok&&k<b.size(); k++) {
							ll temp=b[i]+b[j]+b[k];
							bool works=false;
							for (int x:b) {
								if (temp==x) {
									works=true;
									break;
								}
							}
							if (!works) {
								ok=false;
								break;
							}
						}
					}
				}
				if (ok) cout << "yes\n";
				else cout << "no\n";
			}
		}
	}
}

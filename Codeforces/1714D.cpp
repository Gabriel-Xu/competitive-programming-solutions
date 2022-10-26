#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin >> q;
	while (q--) {
		string t;
		int n;
		cin >> t >> n;
		string s[n];
		for (int i=0; i<n; i++) {
			cin >> s[i];
		}
		vector<pair<int,int>> a;
		for (int i=0; i<t.length(); i++) {
			for (int j=0; j<n; j++) {
				if (i+s[j].length()-1<t.length()) {
					bool ok=true;
					for (int k=0; k<s[j].length(); k++) {
						if (t[i+k]!=s[j][k]) {
							ok=false;
							break;
						}
					}
					if (ok) {
						a.push_back({i, j});
					}
				}
			}
		}
		int m=0;
		vector<int> w;
		vector<int> p;
		int i=0;
		bool ok=true;
		while (i<t.length()) {
			int j;
			int maxend=-1;
			for (int k=0; k<a.size(); k++) {
				auto x=a[k];
				int temp=x.first+s[x.second].length()-1;
				if (x.first<=i&&temp>=i) {
					if (temp>maxend) {
						j=k;
						maxend=x.first+s[x.second].length()-1;
					}
				}
			}
			if (maxend==-1) {
				ok=false;
				break;
			}
			m++;
			w.push_back(a[j].second);
			p.push_back(a[j].first);
			i=a[j].first+s[a[j].second].length();
		}
		if (ok) {
			cout << m << "\n";
			for (int i=0; i<w.size(); i++) {
				cout << w[i]+1 << " " << p[i]+1 << "\n";
			}
		}
		else {
			cout << "-1\n";
		}
	}
}

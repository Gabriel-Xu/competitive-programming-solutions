#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int a[n][n];
	for (int i=0; i<n; i++) {
		string s;
		cin >> s;
		for (int j=0; j<n; j++) {
			a[i][j]=s[j]-'0';
		}
	}
	string ans="0";
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			for (int di=-1; di<=1; di++) {
				for (int dj=-1; dj<=1; dj++) {
					if (di!=0||dj!=0) {
						string temp="";
						for (int z=0; z<n; z++) {
							temp+=to_string(a[i][j]);
							i+=di;
							i%=n;
							if (i==-1) i=n-1;
							j+=dj;
							j%=n;
							if (j==-1) j=n-1;
						}
						if (temp>ans) ans=temp;
					}
				}
			}
		}
	}
	cout << ans << "\n";
}

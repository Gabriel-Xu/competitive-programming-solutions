#include <bits/stdc++.h>
using namespace std;
#define forn(z) for(int i=0; i<z; i++)

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		string s;
		cin >> n >> k >> s;
		int ans=0;
		char res[n];
		fill(res, res+n, '.');
		int start=-1;
		forn(n) {
			if(s[i]=='G') {
				if(start==-1||i-start>2*k) {
					start=i;
					res[min(i+k, n-1)]='G';
					ans++;
				}
			}
		}
		start=-1;
		forn(n) {
			if(s[i]=='H') {
				if(start==-1||i-start>2*k) {
					start=i;
					for(int j=min(n-1, i+k); j>=0; j--) {
						if(res[j]=='.') {
							res[j]='H';
							break;
						}
					}
					ans++;
				}
			}
		}
		cout << ans << "\n";
		forn(n) {
			cout << res[i];
		}
		cout << "\n";
	}
}

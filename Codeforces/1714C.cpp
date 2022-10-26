#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int s;
		cin >> s;
		string ans="";
		int i=9;
		while (s>0) {
			if ((s-i)>=0) {
				s-=i;
				ans=to_string(i)+ans;
				i--;
			} else {
				ans=to_string(s)+ans;
				s=0;
			}
		}
		cout << ans << "\n";
	}
}

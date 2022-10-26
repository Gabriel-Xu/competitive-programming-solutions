#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		int ans=1;
		for (int i=0; i<2*n; i++) {
			if (s[i]=='('&&s[i+1]=='(') ans++;
		}
		cout << ans << "\n";
	}
}

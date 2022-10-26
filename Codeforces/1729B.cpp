#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define pb push_back
#define forn(z) for (int i=0; i<z; i++)

string alpha="abcdefghijklmnopqrstuvwxyz";

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

int main() {
	fastIO();
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		string ans="";
		for (int i=0; i<n; i++) {
			if (i<n-2&&s[i+2]=='0'&&(i>=n-3||s[i+3]!='0')) {
				ans+=alpha[stoi(s.substr(i,2))-1];
				i+=2;
			}
			else {
				ans+=alpha[(int)(s[i]-'0')-1];
			}
		}
		cout << ans << "\n";
	}
}

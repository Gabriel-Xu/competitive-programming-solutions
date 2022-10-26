#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef map<int,int> mpii;
typedef map<ll,ll> mpll;
#define pb push_back
#define forn(z) for (int i=0; i<z; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

int main() {
	fastIO;
	int t;
	cin >> t;
	while (t--) {
		string a, s;
		cin >> a >> s;
		string ans="";
		int alen=a.length();
		int slen=s.length();
		while (slen>0) {
			if (alen==0) {
				ans=s[slen-1]+ans;
				slen--;
			}
			else if (a[alen-1]<s[slen-1]) {
				ans=to_string(s[slen-1]-a[alen-1])+ans;
				alen--;
				slen--;
			}
			else if (a[alen-1]>s[slen-1]) {
				if (slen==1 || s[slen-2]!='1') {
					ans="-1";
					break;
				}
				else {
					ans=to_string(10-(a[alen-1]-s[slen-1]))+ans;
					alen--;
					slen-=2;
				}
			}
			else {
				ans="0"+ans;
				alen--;
				slen--;
			}
		}
		if (alen>0) ans="-1";
		while (ans[0]=='0') {
			ans=ans.substr(1);
		}
		cout << ans << "\n";
	}
}

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
#define forn(z) for(int i=0; i<z; i++)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)

string lower(string s) {
	string ans="";
	for(int i=0; i<s.length(); i++) {
		ans+=(char)tolower(s[i]);
	}
	return ans;
}

bool ok(int y, string s) {
	if(s.length()>50) return false;
	if(y<2010) return true;
	s+=' ';
	if(s.length()>=11&&lower(s.substr(0,11))=="california ") return false;
	if(s.length()>=4&&lower(s.substr(0,4))=="cal ") return false;
	if(s.length()>=9&&lower(s.substr(0,9))=="berkeley ") return false;
	return true;
}

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int y;
		string s;
		cin >> y;
		cin.ignore();
		getline(cin, s);
		cout << (ok(y,s)?"VAlID":"INVAlID") << "\n";
	}
}

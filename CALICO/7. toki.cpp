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

bool isc(char c) {
	string cons="mnptkswjl";
	forn(14) {
		if(c==cons[i]) return true;
	}
	return false;
}

bool isv(char c) {
	string cons="aeiou";
	forn(5) {
		if(c==cons[i]) return true;
	}
	return false;
}

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n=s.length();
		bool ans=true;
		int prevv=-1;
		forn(n) {
			char c=s[i];
			if(!isc(c)&&!isv(c)) ans=false;
			if(isv(c)) {
				if(i-prevv>3||(i-prevv==1&&prevv!=-1)) ans=false;
				if(i-prevv==3) {
					if(s[i-2]!='n') ans=false;
				}
				if(prevv==-1&&i==2) ans=false;
				prevv=i;
			}
		}
		forn(n-1) {
			string t=s.substr(i, 2);
			string temp="wuwojitinnnm";
			for(int i=0; i<12; i+=2) {
				if(temp.substr(i, 2)==t) ans=false;
			}
		}
		if(prevv<n-2||prevv==-1) ans=false;
		else if(prevv==n-2&&s[n-1]!='n') ans=false;
		cout << (ans?"pona":"ike") << "\n";
	}
}

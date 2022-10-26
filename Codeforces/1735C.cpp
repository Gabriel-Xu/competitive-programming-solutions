#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define pb push_back
#define forn(z) for (int i=0; i<z; i++)

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

bool works(unordered_map<int,int> circ, int a, int b) {
	if (circ.count(a)==1) return false;
	for (auto x:circ) {
		if (x.second==b) {
			return false;
		}
	}
	bool found=false;
	for (auto x:circ) {
		if (x.second==a) {
			found=true;
			break;
		}
	}
	if (circ.size()==25) {
		return found;
	}
	if (!found||circ.count(b)==0) return true;
	while (circ.count(b)==1) {
		if (circ[b]==a) return false;
		b=circ[b];
	}
	return true;
}

int main() {
	fastIO();
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		string alpha="abcdefghijklmnopqrstuvwxyz", ans="";
		unordered_map<int,int> circ;
		for (int i=0; i<n; i++) {
			bool found=false;
			for (auto x:circ) {
				if (x.second==s[i]-'a') {
					ans+=alpha[x.first];
					found=true;
					break;
				}
			}
			if (found) continue;
			for (int j=0; j<26; j++) {
				if (j!=s[i]-'a'&&works(circ, j, s[i]-'a')) {
					circ[j]=s[i]-'a';
					ans+=alpha[j];
					break;
				}
			}
		}
		cout << ans << "\n";
	}
}

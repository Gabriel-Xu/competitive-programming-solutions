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

int main() {
	fastIO();
	int t;
	cin >> t;
	while (t--) {
		int q;
		cin >> q;
		ll a[26], b[26];
		for (int i=0; i<26; i++) {
			a[i]=0;
			b[i]=0;
		}
		a[0]=1;
		b[0]=1;
		while (q--) {
			int d, k;
			string s;
			cin >> d >> k >> s;
			if (d==1) {
				for (int i=0; i<s.length(); i++) {
					a[s[i]-'a']+=k;
				}
			}
			else {
				for (int i=0; i<s.length(); i++) {
					b[s[i]-'a']+=k;
				}
			}
			int afirst, blast;
			for (int i=0; i<26; i++) {
				if (a[i]>0) {
					afirst=i;
					break;
				}
			}
			for (int i=25; i>=0; i--) {
				if (b[i]>0) {
					blast=i;
					break;
				}
			}
			if (afirst<blast) {
				cout << "yes\n";
			}
			else if (blast<afirst) {
				cout << "no\n";
			}
			else {
				bool amore=false, bmore=false;
				for (int i=afirst+1; i<26; i++) {
					if (a[i]>0) amore=true;
				}
				for (int i=bmore-1; i>=0; i--) {
					if (a[i]>0) bmore=true;
				}
				if (a[afirst]<b[afirst]) {
					cout << (amore?"no\n":"yes\n");
				}
				else if (a[afirst]==b[blast]) {
					cout << (!amore&&bmore?"yes\n":"no\n");
				}
				else {
					cout << "no\n";
				}
			}
		}
	}
}

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
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++) {
			cin >> a[i];
		}
		double sum=0;
		for (int i=0; i<n; i++) {
			sum+=a[i];
		}
		bool ans=false;
		for (int i=0; i<n; i++) {
			if (a[i]==(sum-a[i])/(n-1)) ans=true;
		}
		cout << (ans?"yes\n":"no\n");
	}
}

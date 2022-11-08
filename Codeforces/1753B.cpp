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

const int mn=500000;

int main() {
	fastIO;
	int n, x;
	cin >> n >> x;
	int a[mn+1];
	fill(a, a+mn+1, 0);
	for (int i=0; i<n; i++) {
		int y;
		cin >> y;
		a[y]++;
	}
	for (int i=1; i<mn; i++) {
		a[i+1]+=a[i]/(i+1);
		a[i]%=(i+1);
	}
	bool ans=true;
	for (int i=1; i<x; i++) {
		if (a[i]>0) ans=false;
	}
	cout << (ans?"yes":"no") << "\n";
}

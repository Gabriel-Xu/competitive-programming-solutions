#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forn(x) for(int i=0; i<x; i++)
string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, q;
	cin >> n >> k >> q;
	int a[k];
	int squares[n+1]={0};
	forn(k) {
		cin >> a[i];
		squares[a[i]]=i+1;
	}
	forn(q) {
		int x;
		cin >> x;
		x--;
		if (a[x]<n&&squares[a[x]+1]==0) {
			squares[a[x]+1]=squares[a[x]];
			squares[a[x]]=0;
			a[x]++;
		}
	}
	forn(k) cout << a[i] << " ";
	cout << "\n";
}

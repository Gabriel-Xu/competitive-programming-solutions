#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forn(x) for(int i=0; i<x; i++)
string alpha="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x;
    cin >> n >> x;
    string s="";
    for (int i=0; i<26; i++) {
        for (int j=0; j<n; j++) {
            s+=alpha[i];
        }
    }
    cout << s[x-1] << "\n";
}

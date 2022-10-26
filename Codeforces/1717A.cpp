#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << 2*(n/3+n/2)+n << "\n";
	}
}

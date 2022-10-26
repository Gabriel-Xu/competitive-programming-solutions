#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	if (!(r1<=l2||l1>=r2)) {
		cout << min(r1, r2)-max(l1, l2) << "\n";
	} else {
		cout << "0\n";
	}
}

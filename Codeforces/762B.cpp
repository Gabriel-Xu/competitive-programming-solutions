#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	int m;
	cin >> m;
	vector<pair<int,string>> mouses;
	while (m--) {
		int x;
		string s;
		cin >> x >> s;
		mouses.push_back({x, s});
	}
	sort(mouses.begin(), mouses.end());
	int usbcount=0, ps2count=0, bothcount=0;
	long long cost=0;
	for (auto mouse:mouses) {
		if (mouse.second=="USB") {
			if (usbcount<a) {
				usbcount++;
				cost+=mouse.first;
			}
			else if (bothcount<c) {
				bothcount++;
				cost+=mouse.first;
			}
		}
		else {
			if (ps2count<b) {
				ps2count++;
				cost+=mouse.first;
			}
			else if (bothcount<c) {
				bothcount++;
				cost+=mouse.first;
			}
		}
	}
	cout << usbcount+ps2count+bothcount << " " << cost << "\n";
}

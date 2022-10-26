#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i=0; i<t; i++) {
		int W, H, x1, y1, x2, y2, w, h;
		cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
		int xdis, ydis;
		if (x2-x1+w<=W) {
			if (x1>=w || x2<=W-w) {
				xdis=0;
			}
			else {
				xdis=min(abs(x1-w), abs(x2-W+w));
			}
		} else {
			xdis=-1;
		}
		if (y2-y1+h<=H) {
			if (y1>=h || y2<=H-h) {
				ydis=0;
			}
			else {
				ydis=min(abs(y1-h), abs(y2-H+h));
			}
		} else {
			ydis=-1;
		}
		if (xdis==-1&&ydis==-1) cout << "-1\n";
		else if (xdis==-1) cout << ydis << "\n";
		else if (ydis==-1) cout << xdis << "\n";
		else cout << min(ydis, xdis) << "\n";
	}
}

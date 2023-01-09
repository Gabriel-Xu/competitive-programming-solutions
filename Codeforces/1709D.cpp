#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
#define pb push_back
#define forn(z) for(int i=0; i<z; i++)
#define forn2(z) for(int j=0; j<z; j++)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

class MinSegmentTree {
	private:
		int comb(int a, int b) { return min(a, b); }
		const int DEFAULT = 1e9;
		vector<int> segtree;
		int len;
	public:
		MinSegmentTree(int l) { len=l; segtree.resize(len * 2); fill(segtree.begin(), segtree.end(), DEFAULT);}

		void set(int ind, int val) {
			assert(0 <= ind && ind < len);
			ind += len;
			segtree[ind] = val;
			for (; ind > 1; ind /= 2) {
				segtree[ind >> 1] = comb(segtree[ind], segtree[ind ^ 1]);
			}
		}

		int range_min(int start, int end) {
			assert(0 <= start && start < len && 0 < end && end <= len);
			int sum = DEFAULT;
			for (start += len, end += len; start < end; start /= 2, end /= 2) {
				if ((start & 1) != 0) {
					sum = comb(sum, segtree[start++]);
				}
				if ((end & 1) != 0) {
					sum = comb(sum, segtree[--end]);
				}
			}
			return sum;
		}
};

int main() {
	fastIO;
	int n, m;
	cin >> n >> m;
	MinSegmentTree segtree(m);
	forn(m) {
		int x;
		cin >> x;
		segtree.set(i, n-x);
	}
	int q;
	cin >> q;
	while(q--) {
		int xs, ys, xf, yf, k;
		cin >> xs >> ys >> xf >> yf >> k;
		xs=n-xs+1;
		xf=n-xf+1;
		if(ys>yf) {
			swap(ys, yf);
		}
		int minimum=segtree.range_min(ys-1, yf);
		xs=(xs%k==0?xs-k*(xs/k-1):xs%k);
		xf=(xf%k==0?xf-k*(xf/k-1):xf%k);
		cout << (xs<=minimum&&xf<=minimum&&(yf-ys)%k==0&&abs(xs-xf)%k==0?"YES":"NO") << "\n";
	}
}

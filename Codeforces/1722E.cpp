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

int main() {
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int p1=0, both=0, p2=0;
		forn(n) {
			int x;
			cin >> x;
			if(x!=i+1&&x!=n-i) both++;
			else if(x!=i+1) p1++;
			else if(x!=n-i) p2++;
		}
		string ans;
		debug(p1, both, p2);
		while(true) {
			if(p1==0&&both==0) {
				ans="First";
				break;
			}
			if(p2==0&&both==0) {
				ans="Second";
				break;
			}
			if(p1==0&&p2==0&&both!=0) {
				ans="Tie";
				break;
			}
			if(p1!=0) p1--;
			else both--;
			if(p1==0&&p2==0&&both!=0) {
				ans="Tie";
				break;
			}
			if(p2!=0) p2--;
			else both--;
		}
		cout << ans << "\n";
	}
}

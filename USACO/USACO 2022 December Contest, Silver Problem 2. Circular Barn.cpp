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
#define forn(z) for(int i=0; i<z; i++)
#define fornt(z) for(int j=0; j<z; j++)
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

const int mn=5e6;

int main() {
	vector<bool> is_prime(mn+1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= mn; i++) {
		if (is_prime[i] && (ll)i * i <= mn) {
			for (int j = i * i; j <= mn; j += i)
				is_prime[j] = false;
		}
	}
	is_prime[1]=true;
	vi turns(mn+1, -1);
	forn(mn+1) {
		if(is_prime[i]) {
			turns[i]=0;
		}
	}
	for(int i=1; i<=mn; i++) {
		if(i%4==2) {
			turns[i]=i/4;
		}
		else if(i%4==0) {
			turns[i]=i/4;
		}
		else if(!is_prime[i]) {
			for(int j=i-1; j>=1; j--) {
				if(is_prime[j]&&j%4==i%4) {
					turns[i]=turns[i-j];
					break;
				}
			}
		}
	}
	fastIO;
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		bool ans;
		int minv=5e6+1;
		forn(n) {
			int x;
			cin >> x;
			if(turns[x]<minv) {
				minv=turns[x];
				ans=x%4!=0;
			}
		}
		cout << "Farmer " << (ans?"John":"Nhoj") << "\n";
	}
}

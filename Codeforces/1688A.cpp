#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
		int x;
		cin >> x;
		int w=x&(-x);
		while(!(w^x)||!(w&x)) w++;
		cout << w << "\n";
	}
	return 0;
}
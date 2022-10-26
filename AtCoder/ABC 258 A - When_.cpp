#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k;
	cin >> k;
	int h=21;
	int m=0;
	h=(h+k/60)%24;
	m+=k%60;
	string h2=to_string(h);
	string m2=to_string(m);
	if (h2.length()==1) h2='0'+h2;
	if (m2.length()==1) m2='0'+m2;
	cout << h2 << ":" << m2 << "\n";
}

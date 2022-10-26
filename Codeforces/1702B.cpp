#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int days=1;
		int count=0;
		vector<char> letters;
		for (int i=0; i<s.length(); i++) {
			bool found=false;
			for (char x:letters) {
				if (x==s[i]) found=true;
			}
			if (!found) {
				if (count==3) {
					days++;
					count=1;
					letters.clear();
					letters.push_back(s[i]);
				}
				else {
					count++;
					letters.push_back(s[i]);
				}
			}
		}
		cout << days << "\n";
	}
}

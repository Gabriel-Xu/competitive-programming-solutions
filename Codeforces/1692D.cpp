#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		string s;
		int x;
		cin >> s >> x;
		int hours=stoi(s.substr(0,2));
		int mins=stoi(s.substr(3,2));
		vector<pair<int,int>> times;
		while (times.empty()||(hours!=times[0].first||mins!=times[0].second)) {
			times.push_back({hours,mins});
			mins+=x%60;
			if (mins>=60) {
				hours++;
				mins=mins-60;
			}
			hours+=x/60;
			hours%=24;
		}
		int ans=0;
		for (auto time:times) {
			string temp=to_string(time.first);
			string temp2=to_string(time.second);
			if (temp.length()==1) temp="0"+temp;
			if (temp2.length()==1) temp2="0"+temp2;
			if (temp[0]==temp2[1]&&temp[1]==temp2[0]) {
				ans++;
			}
		}
		cout << ans << "\n";
	}
}

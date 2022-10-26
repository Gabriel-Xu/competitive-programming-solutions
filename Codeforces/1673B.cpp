#include <bits/stdc++.h>
using namespace std;

string alpha="abcdefghijklmnopqrstuvwxyz";

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        bool ans=true;
        for (int i=0; i<26&&ans; i++) {
            for (int j=i+1; j<26&&ans; j++) {
                string t="";
                for (int k=0; k<s.length(); k++) {
                    if (s[k]==alpha[i]||s[k]==alpha[j]) {
                        t+=s[k];
                    }
                }
                bool ok=true;
                int tlen=t.length();
                for (int k=0; k<tlen-1; k++) {
                    if (t[k]!=t[k+1]) {
                        ok=false;
                        break;
                    }
                }
                if (!ok) {
                    for (int k=0; k<tlen-1; k++) {
                        if (t[k]==t[k+1]) {
                            ans=false;
                            break;
                        }
                    }
                }
            }
        }
        cout << (ans?"yes\n":"no\n");
    }
}
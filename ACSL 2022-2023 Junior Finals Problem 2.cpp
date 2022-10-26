#include <bits/stdc++.h>
using namespace std;

int squares[5]={1,1,2,3,5};
char colors[8]={'r','g','b','c','m','y','w','k'};

bool works(int lights[5], int hours, int minutes, int seconds) {
    int currh=0, currm=0, currs=0;
    for (int i=0; i<5; i++) {
        switch(colors[lights[i]]) {
            case 'r':
                currh+=squares[i];
                break;
            case 'g':
                currm+=5*squares[i];
                break;
            case 'b':
                currs+=5*squares[i];
                break;
            case 'c':
                currm+=5*squares[i];
                currs+=5*squares[i];
                break;
            case 'm':
                currh+=squares[i];
                currs+=5*squares[i];
                break;
            case 'y':
                currh+=squares[i];
                currm+=5*squares[i];
                break;
            case 'w':
                currh+=squares[i];
                currm+=5*squares[i];
                currs+=5*squares[i];
                break;
            case 'k':
                break;
        }
    }
    return (currh==hours&&currm==minutes&&currs==seconds);
}

int main() {
    string time;
    cin >> time;
	string temp1=time.substr(0,2);
    string temp2=time.substr(3,2);
    string temp3=time.substr(6,2);
    int hours, minutes, seconds;
    if (temp1[0]=='0') hours=temp1[1]-'0';
    else hours=stoi(temp1);
    if (temp2[0]=='0') minutes=temp2[1]-'0';
    else minutes=stoi(temp2);
    if (temp3[0]=='0') seconds=temp3[1]-'0';
    else seconds=stoi(temp3);
    vector<string> answers;
    for (int color1=0; color1<8; color1++) {
        for (int color2=0; color2<8; color2++) {
            for (int color3=0; color3<8; color3++) {
                for (int color4=0; color4<8; color4++) {
                    for (int color5=0; color5<8; color5++) {
                        int arr[5]={color1, color2, color3, color4, color5};
                        if (works(arr, hours, minutes, seconds)) {
                            string tempans=string(1,colors[color1])+string(1,colors[color2])+string(1,colors[color3])+string(1,colors[color4])+string(1,colors[color5]);
                            answers.push_back(tempans);
                        }
                    }
                }
            }
        }
    }
    sort(answers.begin(), answers.end());
    string ans="";
    for (int i=0; i<answers.size(); i++) {
        ans+=answers[i]+" ";
    }
    cout << ans << "\n";
}

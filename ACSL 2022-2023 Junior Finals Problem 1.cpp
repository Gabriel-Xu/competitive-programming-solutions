#include <bits/stdc++.h>
using namespace std;

int main() {
    int waveLength;
    string numbers;
    cin >> waveLength >> numbers;
	vector<int> nums;
    string temp="";
    for (int i=0; i<numbers.length(); i++) {
        char x=numbers[i];
        if (x==' ') {
            nums.push_back(stoi(temp));
            temp="";
        }
        else temp+=x;
        if (i==numbers.length()-1) {
            nums.push_back(stoi(temp));
        }
    }
    int firstsize=nums.size();
    string ans="";
    int tempLength=waveLength;
    int currIndex=0;
    bool sorta=true;
    while (tempLength>0) {
        int arr[tempLength];
        for (int i=0; i<tempLength; i++) {
            if (currIndex>=nums.size()) {
                for (int i=0; i<firstsize; i++) nums.push_back(nums[i]);
            }
            arr[i]=nums[currIndex];
            currIndex++;
        }
        if (sorta) sort(arr, arr+tempLength);
        else sort(arr, arr+tempLength, greater<int>());
        sorta=!sorta;
        for (int i=0; i<tempLength; i++) {
            ans+=to_string(arr[i])+" ";
        }
        tempLength--;
    }
    if (currIndex<nums.size()) {
        int tempsize=nums.size()-currIndex;
        int arr[tempsize];
        for (int i=0; i<tempsize; i++) {
            arr[i]=nums[currIndex];
            currIndex++;
        }
        if (sorta) sort(arr, arr+tempsize);
        else sort(arr, arr+tempsize, greater<int>());
        for (int i=0; i<tempsize; i++) {
            ans+=to_string(arr[i])+" ";
        }
    }
    cout << ans << "\n";
}
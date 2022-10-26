#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[2*n];
	for (int i=0; i<2*n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+2*n);
	int ans=9999;
	for (int i=0; i<2*n-1; i++) {
		for (int j=i+1; j<2*n; j++) {
			int sum=0;
			int arr2[2*(n-1)];
			int count=0;
			for (int k=0; k<2*n; k++) {
				if (k!=i&&k!=j) {
					arr2[count]=arr[k];
					count++;
				}
			}
			for (int k=0; k<2*(n-1); k+=2) {
				sum+=arr2[k+1]-arr2[k];
			}
			ans=min(sum, ans);
		}
	}
	cout << ans << "\n";
}
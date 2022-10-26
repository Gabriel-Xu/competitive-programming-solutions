#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int board[n][m];
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				cin >> board[i][j];
			}
		}
		int ans=0;
		int dx[]={1,-1,1,-1};
		int dy[]={1,-1,-1,1};
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++) {
				int sum=board[i][j];
				for (int a=0; a<4; a++) {
					int val;
					if (dx[a]==1&&dy[a]==1) val=min(n-i-1, m-j-1);
					else if (dx[a]==-1&&dy[a]==-1) val=min(i, j);
					else if (dx[a]==1&&dy[a]==-1) val=min(i, m-j-1);
					else if (dx[a]==-1&&dy[a]==1) val=min(j, n-i-1);
					for (int b=1; b<=val; b++) {
						int temp=board[i+dy[a]*b][j+dx[a]*b];
						sum+=temp;
					}
				}
				if (sum>ans) ans=sum;
			}
		}
		cout << ans << "\n";
	}
}
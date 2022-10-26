#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> edges[100000];
bool visited[100000];
bool group[100000];

void dfs(int node, bool g=0) {
	visited[node]=true;
	group[node]=g;
	for (int a:edges[node]) {
		if (!visited[a]) dfs(a, !g);
	}
}

int main() {
	cin >> n;
	for (int i=0; i<n; i++) {
		int u, v;
		cin >> u >> v;
		edges[u-1].push_back(v-1);
		edges[v-1].push_back(u-1);
	}
	for (int i=0; i<n; i++) {
		if (!visited[i]) dfs(i);
	}
	long long g0=0, g1=0;
	for (int i=0; i<n; i++) {
		if (group[i]==0) g0++;
		else g1++;
	}
	long long ans=g0*g1-(n-1);
	cout << ans << "\n";
}

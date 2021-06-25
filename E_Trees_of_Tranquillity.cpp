#include <bits/stdc++.h>

int n, m;
using namespace std;
vector<int> adj[150000];
bool visited[150000];
vector<int> path;

void dfs(int node, int par) {
	
	visited[node] = true;
	path.push_back(node);
	
	for(auto u : adj[node]) {
		if (u == par) continue;
		if(visited[u]) {
			path.push_back(u);
			auto i = find(path.begin(), path.end(), u) - path.begin();
			cout << path.size() - i;
			while(i < path.size()) {
				cout << path[i++] << " ";
			}
			exit(0);
		} else {
			dfs(u, node);
		}
	}
}
int main() {
	// your code goes here
	cin >> n >> m;
	for(int i{0}; i < m; i++) {
		int x, y;
		cin >> x >> y;
		adj[y].push_back(x);
		adj[x].push_back(y);
	}
	
	for(int i{1}; i <= n; i++)
		if(!visited)
			dfs(i, 0);
	cout << "IMPOSSIBLE";
	return 0;
}
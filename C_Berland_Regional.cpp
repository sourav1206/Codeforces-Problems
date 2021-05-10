#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <numeric>
#include <queue>
#include <climits>
#define MOD (long)(1000000000 + 7)
using namespace std;

bool compareLen(vector<long>& a, vector<long>& b) {
	return a.size() >= b.size();
}

int main() {
	long t, n;
	cin >> t;
	for(int test = 0; test < t; test++) {
		cin >> n;
		vector<vector<long>> university(n);
		vector<long> sum(n, 0), u(n, 0);
		long s;
		for(int i = 0; i < n; i++) {
			cin >> u[i];
			u[i]--;
		}
		for(int i = 0; i < n; i++) {
			cin >> s;
			university[u[i]].push_back(s);
		}
		for(int i = 0; i < n; i++) {
			sort(university[i].begin(), university[i].end());
			for(int j = university[i].size() - 1; j >= 0; j--) {
				university[i][j] += university[i][j + 1];
			}
		}
		sort(university.begin(), university.end(), compareLen);
		for(int k = 1; k <= n; k++) {
			long long totalSum = 0;
			for(int j = 0; j < n && university[j].size() >= k; j++) {
				int len = university[j].size();
				int index = len%k;
				totalSum += university[j][index];
			}
			cout << totalSum <<  " ";
		}
		cout << endl;
	}
	return 0;
}

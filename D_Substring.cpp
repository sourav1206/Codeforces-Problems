#include<bits/stdc++.h>
using namespace std;
char a[300003];
int used[300003];
int dp[300003][30];
int g[300003];
int p[300003];
int l[300003], lg;
void insert(int u, int v){
    lg ++;
    g[lg] = v;
    p[lg] = l[u];
    l[u] = lg;
}
void dfs(int u, int k){
    if(used[u] && used[u] < k){
        puts("-1");
        exit(0);
    }
    if(used[u]) return;
    used[u] = k;
    int v;
    for(int i = l[u]; i ; i = p[i]){
        v = g[i];
        dfs(v, k + 1);
        for(int j = 0; j < 26; j ++)
            if(dp[u][j] < dp[v][j]) dp[u][j] = dp[v][j];
    }
    dp[u][a[u-1] - 'a'] ++;
    used[u] = 1000000;
}
int solve(int n,int m,string s,int x[],int y[])
{
	for(int i=0;i<n;i++)
	{
		a[i]=s[i];
	}
	for(int i=1;i<=n;i++)
	{
		dfs(i,1);
	}
	int res=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(dp[i][j]>res)
			{
				res=dp[i][j];
			}
		}
	}
	return res;
}
	
int main()
{
	int n,m;
	cin>>n>>m;
	int x[m],y[m];
	string str;
	cin>>str;
	for(int i = 0; i < m; i ++){
		int u,v;
        scanf("%d%d", &u, &v);
        insert(u, v);
    }
	cout<<solve(n,m,str,x,y);
}
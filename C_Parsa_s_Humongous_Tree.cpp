#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
const ll N=200005;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
v64 g[N];
int a[N];
vp64 arr(N);
ll ans=0;
int dp[N][2];
void dfs(int i,int par=-1)
{
  max_ans[i].first=0;
  max_ans[i].second=0;
  for(auto x:adj[i])
    if(x!=par)
    {
      dfs(x,i);
      max_ans[i].first+=max(max_ans[x].first+abs(value[i].first-value[x].first),max_ans[x].second+abs(value[i].first-value[x].second));
      max_ans[i].second+=max(max_ans[x].first+abs(value[i].second-value[x].first),max_ans[x].second+abs(value[i].second-value[x].second));
    }
}
void solve(){
    ll i,j,n,k,m;
    memset(dp,-1,sizeof(dp));
    cin>>n;
    ans=0;
    forn(i,n)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    ll ans=dfs2(0,-1,0,arr[0].first);
    memset(dp,-1,sizeof(dp));
    ll ans2=dfs2(0,-1,1,arr[0].second);
    cout<<max(ans,ans2)<<ln;

}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}

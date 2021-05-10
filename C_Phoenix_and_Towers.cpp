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


void solve(){
    ll n,m,x;
    cin>>n>>m>>x;
    priority_queue<p64,vector<p64>,greater<p64>>pt;
    forn(i,m)
    {
        pt.push({0,i+1});
    }
    vector<pair<ll,ll>>arr(n);
    forn(i,n)
    {
        cin>>arr[i].first;
        arr[i].second=i;
    }
    ll ans[n];
    sort(arr.begin(),arr.end());
    for(ll i=n-1;i>=0;i--)
    {
        p64 temp= pt.top();
        pt.pop();
        ans[arr[i].second]=temp.second;
        temp.first+=arr[i].first;
        pt.push(temp);
    }
    ll mx=0,mn=1e12;
    forn(i,m)
    {
        p64 temp= pt.top();
        pt.pop();
        mx=max(mx,temp.first);
        mn=min(mn,temp.first);
    }
    if(mx-mn<=x)
    {
        cout<<"YES"<<ln;
        forn(i,n)
        {
            cout<<ans[i]<<" ";
        }
        cout<<ln;
    }
    else
    {
        cout<<"NO"<<ln;
    }
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

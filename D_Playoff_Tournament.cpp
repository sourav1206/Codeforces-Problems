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

void dfs(ll x,v64 &arr, string &str)
{
    ll n=arr.size();
    if(2*x+1>=n-1)
    {
        if(str[x]=='?')
        {
            arr[x]=2;
        }
        else
        {
            arr[x]=1;
        }
        return;
    }
    dfs(2*x+1,arr,str);
    dfs(2*x+2,arr,str);
    if(str[x]=='?')
    {
        arr[x]=arr[2*x+1]+arr[2*x+2];
    }
    else if(str[x]=='0')
    {
        arr[x]=arr[2*x+2];
    }
    else
    {
        arr[x]=arr[2*x+1];
    }
}
void solve(){
    ll k;
    cin>>k;
    ll n=(1*(pow(2,k)));
    string str;
    cin>>str;
    if(k==1)
    {
        ll que;
        cin>>que;
        while(que--)
        {
            ll p;
            char ch;
            cin>>p>>ch;
            if(ch=='?')
            {
                cout<<2<<ln;
            }
            else
            {
                cout<<1<<ln;
            }
        }
        return;
    }
    reverse(str.begin(),str.end());
    v64 arr(n);
    dfs(0,arr,str);
    ll que;
    cin>>que;
    while(que--)
    {
        ll p;
        char ch;
        cin>>p>>ch;
        p=n-p-1;
        str[p]=ch;
        while(p>0)
        {
            if(2*p+1>=n-1)
            {
                if(str[p]=='?')
                {
                    arr[p]=2;
                }
                else
                {
                    arr[p]=1;
                }
            }
            else
            {
                if(str[p]=='?')
                {
                    arr[p]=arr[2*p+1]+arr[2*p+2];
                }
                else if(str[p]=='0')
                {
                    arr[p]=arr[2*p+2];
                }
                else
                {
                    arr[p]=arr[2*p+1];
                }
            }
            p=(p-1)/2;
        }
        if(str[0]=='?')
        {
            arr[0]=arr[1]+arr[2];
        }
        else if(str[0]=='0')
        {
            arr[0]=arr[2];
        }
        else
        {
            arr[0]=arr[1];
        }
        cout<<arr[0]<<ln;
    }
}
int main()
{
    fast_cin();
    ll t=1;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}

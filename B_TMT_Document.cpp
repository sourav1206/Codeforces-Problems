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
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll count1=0,count2=0,f=0;
    ll cnt=count(str.begin(),str.end(),'M');
    if(cnt!=n/3)
    {
        cout<<"NO"<<ln;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(str[i]=='T')
            {
                count1++;
            }
            else if(str[i]=='M')
            {
                count2++;
            }
            if(count2>count1)
            {
                f=1;
                break;
            }
        }
    ll count0=0,count3=0;
    if(f==0)
    {
        for(ll i=n-1;i>=0;i--)
        {
            if(str[i]=='T')
            {
                count0++;
            }
            else if(str[i]=='M')
            {
                count3++;
            }
            if(count3>count0)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        cout<<"NO"<<ln;
    }
    else{
        cout<<"YES"<<ln;
    }
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

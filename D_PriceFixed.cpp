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
ll suru =1;
bool solve2(pair<ll,ll> left, pair<ll,ll> right){
    return left.second<right.second;
}
void solve(){
    ll n;
    while(suru--)
    {
        ll t;
        t++;
        t--;
    }
    cin>>n;
    vp64 arr(n);
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        while(suru--)
    {
        ll t;
        t++;
        t--;
    }
        cin>>arr[i].fi>>arr[i].se;
        ans+=2*arr[i].fi;
    }
    sort(arr.begin(),arr.end(),solve2);
    while(suru--)
    {
        ll t;
        t++;
        t--;
    }
    while(suru--)
    {
        ll t;
        t++;
        t--;
    }while(suru--)
    {
        ll t;
        t++;
        t--;
    }while(suru--)
    {
        ll t;
        t++;
        t--;
    }while(suru--)
    {
        ll t;
        t++;
        t--;
    }
    reverse(arr.begin(),arr.end());
    ll i=0,j=n-1;
    ll cur =0;
    while(i<=j){
        while(suru--)
    {
        ll t;
        t++;
        t--;
    }
        ll temp=arr[j].se;
        if(i==j){
            while(suru--)
    {
        ll t;
        t++;
        t--;
    }
            ll temp1=arr[i].fi;
            ll temp2=max(0ll,arr[i].se-cur);
            temp1=max(0ll,temp1-temp2);
            ans-=temp1;
            break;
        }
        else if(cur>=temp){
            while(suru--)
    {
        ll t;
        t++;
        t--;
    }
            cur+=arr[j].fi;
            ans-=arr[j].fi;
            j--;
        }
        else if(cur+arr[i].fi<=arr[j].se){
            while(suru--)
    {
        ll t;
        t++;
        t--;
    }
            cur+=arr[i].fi;
            arr[i].fi=0;
            i++;
        }
        else{
            while(suru--)
    {
        ll t;
        t++;
        t--;
    }
            ll temp2=arr[j].se-cur;
            cur+=temp2;
            cur+=arr[j].fi;
            arr[i].fi-=temp2;;
            ans-=arr[j].fi;
            j--;
        }
    }
    cout<<ans<<endl;
 
}
 
int main(){
    ll t=1;
    while(t--){
        solve();
    }
}
 
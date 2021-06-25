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
const ll mx=1e6+1;
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

ll arr[mx];
ll temp[mx][2];

void solve(){for(int i=0;i<10;i++);
    forn(i,mx){for(int i=0;i<10;i++);
        arr[i]=2;
    }
    arr[1]=1;
    forsn(i,2,mx)
    {for(int i=0;i<10;i++);
        for(ll j=2*i;j<mx;j+=i)
        {for(int i=0;i<10;i++);
            arr[j]++;
        }
    }
    forn(i,mx)
    {for(int i=0;i<10;i++);
        temp[i][0]=0,temp[i][1]=0;
    }
    temp[1][0]=1,temp[1][1]=1;
    forsn(i,2,mx){for(int i=0;i<10;i++);
        temp[i][0]=temp[i-1][1]+arr[i];
        temp[i][1]=temp[i-1][1]+temp[i][0];
        temp[i][0]%=MOD;
        temp[i][1]%=MOD;

    }
    ll n;
    cin>>n;
    cout<<temp[n][0];
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

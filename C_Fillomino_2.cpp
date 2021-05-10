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

int tempc(vector<vector<int>> &arr1,int i,int j,int n,int val,int &cnt){
        if (i >= n or j < 0) {
            return 0;
        }
        if (arr1[i][j] != -1) {
            return 0;
        }
        arr1[i][j] = val;
        cnt += 1;
        if (cnt == val) {
            return 1;
        }
        if (tempc(arr1,i, j - 1,n,val,cnt)) {
            return 1;
        }
        if (tempc(arr1,i + 1, j,n,val,cnt)) {
            return 1;
        }
        return 0;
}
void solve(){
    int n;
    cin >> n;
    vector<int> arr2(n);
   forn(i,n)
   {
       cin>>arr2[i];
   }
   vector<vector<int>> temp3(n, vector<int>(n, -1));
    int val = -1, cnt = 0;
    forn(i,n) {
        cnt = 0, val = arr2[i];
        if (tempc(temp3,i, i,n,val,cnt) == 0) {
            cout << -1 << endl;
            return;
        }
    }
    forn (i,n) {
        forn (j ,i+1) {
            cout << temp3[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    solve();
}

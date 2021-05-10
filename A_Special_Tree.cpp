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
ll N=18;
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


void dfs(ll u, ll par, vv64& gp_h, v64& level, ll lvl,vv64& parent) {
    level[u] = lvl;
    parent[u][0] = par;
    for (auto to : gp_h[u]) {
        if (to == par) continue;
        dfs(to, u, gp_h, level, lvl + 1, parent);
    }
}

void dfs2(ll u, ll par, vv64& gp_h, v64& ok,  set<ll>& st) {
    for (auto to : gp_h[u]) {
        if (to == par) continue;
        dfs2(to, u, gp_h, ok, st);
        if (ok[to] != -1) {
            ok[u] = ok[to];
        }
    }
    if (ok[u] == -1) {
        if (st.count(u)) {
            ok[u] = u;
        }
    }
}
void solve() {
    ll n, k, a;
    cin >> n >> k >> a;
    a--;
    vv64 gp_h(n);
    set<ll> st;
    forn(i,k) {
        ll temp;
        cin >> temp;
        temp--;
        st.insert(temp);
    }
    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        u--, v--;
        gp_h[u].push_back(v);
        gp_h[v].push_back(u);
    }
    vv64 par(n, v64(N, -1));
    v64 lvl(n);
    dfs(a, -1, gp_h, lvl, 0, par);
    for (ll level = 1; level < N; level++) {
        forn(i,n) {
            if (par[i][level - 1] != -1) {
                par[i][level] = par[par[i][level - 1]][level - 1];
            }
        }
    }
    v64 ok(n, -1);
    dfs2(a, -1, gp_h, ok, st);
    v64 ans1(n), ans2(n);
    forn(node,n) {
        if (ok[node] != -1) {
            ans1[node] = lvl[node];
            ans2[node] = ok[node];
            continue;
        }
        ll curr = node;
        ll last = N - 1;
        while (1) {
            ll flag = 0;
            ll temp_last;
            for (ll lvl = last; lvl >= 0; lvl--) {
                ll u = par[curr][lvl];
                temp_last = lvl;
                if (u == -1) continue;
                if (ok[u] == -1) {
                    curr = u;
                    flag = 1;
                    break;
                }
            }
            if (!flag) {
                curr = par[curr][0];
                last = temp_last;
                break;
            }
        }
        ll d1 = lvl[curr];
        ll d2 = lvl[node] - lvl[curr];
        ans1[node] = d1 - d2;
        ans2[node] = ok[curr];
    }
    forn(i,n) {
        cout << ans1[i] << " ";
    }
    cout << endl;
    forn(i,n) {
        cout << ans2[i] + 1 << " ";
    }
    cout << endl;
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

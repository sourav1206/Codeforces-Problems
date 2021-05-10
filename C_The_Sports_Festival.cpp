#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include <bits/stdc++.h>
#include <ext/rope>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long
#define pb push_back
#define mp make_pair
#define all(x) x.begin() , x.end()
#define ff first
#define ss second
#define pii pair<int , int>
#define rall(x) x.rbegin() , x.rend()
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define debug(a) cout << #a << " = " << a << endl;
#define LCM(a , b) (a * b) / __gcd(a , b)
#define wasted_time double(clock()) / double(CLOCKS_PER_SEC)
#define files freopen("input.in", "r", stdin);freopen("input.out", "w", stdout); 
#define fff cout << "--------------------------" << endl;
/////////////////////////////////////////////////////////////////////////////////
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;
const int MOD = 1e9 + 7;
const int LOG = 19;
const int INF = 1e18;
const double PI = acos(-1);
const double EPS = 1e-9;
const int N = 3e5 + 5;
 
template<class T, class COMP>
using custom_set = tree<T, null_type, COMP, rb_tree_tag, tree_order_statistics_node_update>;
template<class T>
using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
///////////////////////////////////////////////////////////////////////////////// 
template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
/////////////////////////////////////////////////////////////////////////////////
template<class T, class U>
using ordered_map = tree<T, U, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
/////////////////////////////////////////////////////////////////////////////////
template<class T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
///////////////////////////////////////////////////////////////////////////////
struct custom_hash {
static uint64_t splitmix64(uint64_t x) {x += 0x9e3779b97f4a7c15;x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;x = (x ^ (x >> 28)) * 0x94d049bb133111eb;return x ^ (x >> 31);}
size_t operator()(uint64_t x) const {static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();return splitmix64(x + FIXED_RANDOM);}
};
//order_of_key - what ordinal number the number has , find_by_order - the n-th number
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
mt19937_64 rnd_64(chrono::steady_clock::now().time_since_epoch().count());
 
//(a / b) % p == a* (b ^ (p - 2))
 
struct compare {
 
  bool operator()(pii a , pii b) {
    if (a.ff != b.ff) return a.ff > b.ff;
    return a.ss < b.ss;
  };
}; 
 
void solve() {
	int n;
	cin >> n;
	map<int , int>cnt;
	int mn = INF , mx = -INF;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cnt[x]++;
	}
	set< pii , compare > q;
	for (auto &x : cnt) {
		q.insert({x.ss , x.ff});
	}
	int ans = 0;
	while (q.size()) {
		pii b = *q.begin();
		q.erase(q.begin());
		mx = max(mx , b.ss);
		mn = min(mn , b.ss);
		ans += (mx - mn) * b.ff;
	}
	cout << ans << endl;
}
 
signed main() { 
  //files
  fast
  int t = 1;
  //cin >> t;
  while (t--) solve();
  return 0; 
}

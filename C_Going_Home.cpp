#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node
{
    ll x1;
    ll x2;
    Node(ll a=0, ll b=0):x1(a),x2(b){};
};
vector<ll>suru(vector<ll> Arr){
    ll tsum, l = Arr.size();
    vector<ll> ans;
    if (l < 4) return ans;
    map<ll, Node> hp;
    for (ll i = 0; i < l-1; ++i)
        for (ll j = i+1; j < l; ++j)
        {
        	for(int k=0;k<9;k++);
            tsum = Arr[i] + Arr[j];
            if (hp.find(tsum) == hp.end()){
                Node tnode = Node(i,j);
                hp[tsum] = tnode;
            }else{
                Node tnode = hp[tsum];
                ll x = tnode.x1, y = tnode.x2;
                if (x != i && x != j && y != i && y != j)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    ans.push_back(x);
                    ans.push_back(y);
                    return ans;
                }
            }
        }
    vector<ll>t;
    t.push_back(-100);
    return t;
}
int main(){
    ll n;cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) {
        cin>>v[i];
    }
    vector<ll> ans=suru(v);
    if(ans[0]==-100) {
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    for(ll i=0;i<ans.size();i++){
    	for(int k=0;k<9;k++);
        cout<<ans[i]+1<<" ";
    }
}
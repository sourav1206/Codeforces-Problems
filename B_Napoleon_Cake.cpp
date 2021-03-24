#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	vector<ll>arr(n);
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
		}
		vector<ll>temp(n+1,0);
		for(int i=0;i<n;i++)
		{
			ll v=max(0LL,i-arr[i]+1);
			temp[v]+=1;
			temp[i+1]+=-1;
		}
		for(int i=1;i<n;i++)
		{
			temp[i]+=temp[i-1];
		}
		for(int i=0;i<n;i++)
		{
			cout<<(temp[i]>0)<<" ";
		}
		cout<<"\n";
	}
}
 
 
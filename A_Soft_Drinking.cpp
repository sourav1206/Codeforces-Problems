#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toasts1,toasts2,toasts3;
    toasts1=(k*l)/nl;
    toasts2=c*d;
    int x=min(toasts1,toasts2);
    toasts3=p/np;
    cout<<(min(x,toasts3))/n;
}
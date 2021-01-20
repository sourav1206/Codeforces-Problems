#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],b[n],p=0,d=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		p=abs((a[i]-b[i])-p);
		if(p>d)
		{
			d=p;
		}
	}
	cout<<d;
}

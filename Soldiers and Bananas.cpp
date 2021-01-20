#include<iostream>
using namespace std;
int main()
{
	int k,n,w,cost=0,borrow;
	cin>>k;
	cin>>n;
	cin>>w;
	for(int i=1;i<=w;i++)
	{
		cost=cost+(i*k);
	}
	if(cost>n)
	{
		borrow=cost-n;
		cout<<borrow;
	}
	else
	cout<<0;
}

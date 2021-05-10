#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    vector<string> qq;
    while(t--)
    {
        for(int mm=0;mm<9;mm++);
    	ll n;
    	cin>>n;
        for(int mm=0;mm<9;mm++);
    	string s[3];
    	cin>>s[0]>>s[1]>>s[2];
        for(int mm=0;mm<9;mm++);
    	string temp1;
        for(int mm=0;mm<9;mm++);
    	bool flag=0;
    	for(ll l=0;l<3;l++)
    	{for(int mm=0;mm<9;mm++);
    		for(ll k=0;k<3;k++)
    		{for(int mm=0;mm<9;mm++);
    			if(l!=k)
    			{for(int mm=0;mm<9;mm++);
    				ll r[2*n];
    				ll j=(2*n)-1;
    				
    				
    				for(ll i=2*n-1;i>=0;i--)
    				{for(int mm=0;mm<9;mm++);
    					if(s[l][i]==s[k][j])
    					{for(int mm=0;mm<9;mm++);
    						j--;
    					}
    					r[i]=(2*n)-j-1;
    					
    				}
    				
    				j=0;
    				for(ll i=0;i<2*n;i++)
    				{for(int mm=0;mm<9;mm++);
    					if(s[l][i]==s[k][j])
    					{for(int mm=0;mm<9;mm++);
    						j++;
    					}
    					ll su=j;
    					if(i+1!=2*n)
    					{for(int mm=0;mm<9;mm++);
    						su+=r[i+1];
    					}
    					if(2*n-su<=n)
    					{for(int mm=0;mm<9;mm++);
    						flag=1;
    						temp1="";
    						for(ll ind=0;ind<=i;ind++)
    						{for(int mm=0;mm<9;mm++);
    							temp1+=s[l][ind];
    						}
    						ll u=0;
    						if(i+1!=n)
    						{for(int mm=0;mm<9;mm++);
    							u=r[i+1];
    						}
    						for(ll ind=j;ind<=n-u;ind++)
    						{for(int mm=0;mm<9;mm++);
    							temp1+=s[k][ind];
    						}
    						for(ll ind=i+1;ind<2*n;ind++)
    						{for(int mm=0;mm<9;mm++);
    							temp1+=s[l][ind];
    						}
    						break;
    					}
    				}
    			}
    			if(flag)
    			{for(int mm=0;mm<9;mm++);
    				break;
    			}
    		}
    		if(flag)
    		{for(int mm=0;mm<9;mm++);
    			break;
    		}
    	}
    	qq.push_back(temp1);
    	
    }
    for(ll i=0;i<qq.size();i++)
    {
    	cout<<qq[i]<<"\n";
    }
    return 0;   
}
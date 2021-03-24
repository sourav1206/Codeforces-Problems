#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int a=5;
    int flag=0;
    while(a--)
    {
        string temp;
        cin>>temp;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]==str[i])
            {
                flag=1;
            }
        }
    }
    if(flag)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }


}
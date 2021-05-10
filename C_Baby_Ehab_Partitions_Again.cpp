#include <bits/stdc++.h>
using namespace std;
void findMin(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    bool dp[n+1][sum+1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=sum; j++)
        {
            dp[i][j] = dp[i-1][j];
            if (arr[i-1] <= j)
                dp[i][j] |= dp[i-1][j-arr[i-1]];
        }
    }
    int diff = INT_MAX;
    for (int j=sum/2; j>=0; j--)
    {
        if (dp[n][j] == true)
        {
            diff = sum-2*j;
            break;
        }
    }
    if(diff!=0)
        cout<<0<<endl;
    else
        for (int j=0;j<n;j++)
        {
        if (arr[j]%2==1 || dp[n][sum/2-arr[j]/2] == false)
        {
            cout<<1<<endl;
            cout<<j+1<<endl;
            return;
        }
        }

}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    findMin(arr, n);
}
int main()
{
    solve();
    return 0;
}
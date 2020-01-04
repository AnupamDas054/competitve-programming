#include<bits/stdc++.h>

using namespace std;

#define ll long long int


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {

        int n;
        cin>>n;
        ll arr[n+3]={};
        for(int j=1;j<=n;j++)
            cin>>arr[j];
        arr[0]=0;
        ll ans=-1000000000;
        for(int j=1;j<=n;j++)
        {
            ans=max(ans,arr[j]-arr[j-1]);
        }
        ll k=ans;

        for(int j=1;j<n;j++)
        {
            if(arr[j]-arr[j-1]==k)
                k--;
            else if(arr[j]-arr[j-1]>k){
                ans++;
                break;
            }
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
    return 0;
}

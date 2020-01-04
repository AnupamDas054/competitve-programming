#include<bits/stdc++.h>

using namespace std;
int n1,n2;
int arr1[110],arr2[110];
int dp[110][110];
int lcs(int i,int j)
{

    if(i==n1 || j==n2)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
        int ans=0;
    if(arr1[i]==arr2[j])
        ans= 1+lcs(i+1,j+1);
    else
        ans= max(lcs(i+1,j),lcs(i,j+1));
    return dp[i][j]=ans;
}
int main()
{


    int j=1;
    while(cin>>n1>>n2)
    {
        memset(dp,-1,sizeof(dp));
        if(n1==0 && n2==0)
            break;
        for(int i=0;i<n1;i++)
            cin>>arr1[i];
        for(int i=0;i<n2;i++)
            cin>>arr2[i];
        cout<<"Twin Towers #"<<j++<<endl;
        cout<<"Number of Tiles : "<<lcs(0,0)<<endl;
        cout<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define mod 100000000
int dp[101][101][11][11];
int main()
{
    int n1,n2,k1,k2;
    cin>>n1>>n2>>k1>>k2;

    memset(dp,0,sizeof(dp));

    for(int i=0;i<=n1;++i)
    {
        for(int j=0;j<=n2;++j)
        {
            for(int k=0;k<=k1;++k)
            {
                for(int l=0;l<=k2;++l)
                {
                    long long int ans=0;
                    if(i+j==0)
                    {
                        ans=1;
                    }
                    else
                    {
                        if(i>0 && k>0){
                        ans+=dp[i-1][j][k-1][l];
                        ans=ans%mod;
                        }
                        if(j>0 && l>0){
                            ans+=dp[i][j-1][k][l-1];
                            ans=ans%mod;
                        }
                    }
                    dp[i][j][k][l]=ans;
                   // cout<<ans<<endl;
                }
            }
        }
    }
    cout<<dp[n1][n2][k1][k2]<<endl;

}

#include<bits/stdc++.h>

using namespace std;

int call(int i,int amount)
{
    if(i>=5) { //All coins have been taken
        if(amount==make)return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount]; //no need to calculate same state twice
    int ret1=0,ret2=0;
    if(amount+coin[i]<=make) ret1=call(i,amount+coin[i]); //try to take coin i
    ret2=call(i+1,amount); //dont take coin i
    return dp[i][amount]=ret1|ret2; //storing and returning.

}
int main()
{

    int arr[6]={0};arr[0]=50;arr[1]=25;arr[2]=10;arr[3]=5;arr[4]=1;
    int n;

    while(cin>>n)
    {
        int c=0;
        int p[n+2]={0};
        p[0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(i>=arr[j]){
                p[i]+=p[i-arr[j]];
                }
            }
        }
        cout<<p[n]<<endl;
    }

    return 0;
}


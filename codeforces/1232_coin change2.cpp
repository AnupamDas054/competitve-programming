#include<bits/stdc++.h>
using namespace std;
#define mod 100000007
int n;
int ways[10005],coin[10005];
int make;
int make1;


int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {

       scanf("%d%d",&n,&make);
       make1=make;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&coin[j]);

        }
        for(int j=0;j<=make;j++)
        {
            ways[j]=0;

        }
        ways[0]=1;

        for(int j=0;j<n;j++)
        {
            for(int k=1;k<=make;k++)
            {
                if(coin[j]<=k)
                {
                    ways[k]=ways[k]%mod+ways[k-coin[j]]%mod;
                }
            }
        }
        printf("Case %d: %d\n",i,ways[make]%mod);
    }
}


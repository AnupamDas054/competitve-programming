#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int coins[22]={1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261};
ll vis[22][100023];
ll call(ll i,ll make)
{

    if(i>=21)
    {
        if(make==0)
            return 1;
        else
            return 0;
    }
    /*if(coins[i]>make)
    {
        if(make==0)
            return 1;
        else
            return 0;
    }*/
    ll ret1=0,ret2=0;
    if(vis[i][make]!=-1)
        return vis[i][make];
    if(make-coins[i]>=0)
    {
        ret1=call(i,make-coins[i]);
    }
    ret2=call(i+1,make);
    return vis[i][make]=ret1+ret2;

}

int main()
{
     ll make;
     while(cin>>make)
     {
         memset(vis,-1,sizeof(vis));
         cout<<call(0,make)<<endl;
     }
     return 0;
}

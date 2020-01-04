
#include<bits/stdc++.h>
using namespace std;


#define mod 1000000007
#define ll long long int
ll bigmod(ll x, ll n)
{
    ll result=1;
    while(n>0)
    {
        if(n%2==1)
           result=(result*x)%mod;
        x=(x*x)%mod;
        n=n/2;

    }
    return result;
}
int main()
{
    int n,m;
    cin>>n>>m;
    ll ans = (bigmod(2,m)-1);
    cout<<bigmod(ans,n)<<endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long  int
int main()
{
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    int cnt=0;
    ll gcd=__gcd(x,y);
    x=x/gcd;
    y=y/gcd;

        ll k=(a/x);
        ll k1=(b/y);
        if(k<=k1)
        {
            cout<<k<<endl;
        }
        else
            cout<<k1<<endl;



    return  0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{

    ll a,b,c,n;
    cin>>n;
    vector<ll>v,v1;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    ll gc=__gcd(v[0],v[1]);
    for(int i=2;i<n;i++)
    {
        gc=__gcd(gc,v[i]);
    }
    ll k=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            k++;
        }
        else
        {
            v1.push_back(v[i]);
        }
    }
    sort(v1.rbegin(),v1.rend());

}


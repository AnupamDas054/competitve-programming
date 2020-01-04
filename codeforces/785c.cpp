#include<bits/stdc++.h>

#define ll  int64_t

using namespace std;

int main()
{

    ll n,m;
    cin>>n>>m;
    if(n<=m)
    {
        cout<<n<<endl;
        return 0;
    }
    ll l=0, r=2e9;
    n=n-m;
    while(l<r)
    {
        ll mid=(l+r)/2;
        ll val=mid*(mid+1)/2;
        if(val<n)
            l=mid+1;
        else
            r=mid;
    }
    cout<<m+l<<endl;
    return 0;
}

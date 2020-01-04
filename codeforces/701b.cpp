#include<bits/stdc++.h>
using namespace std;

typedef long long int  ll;
map< pair <int,int>, int >ma;
int main()
{
     ll n,m;
    cin>>n>>m;
    ll c = (n*n);
    ll sum=0;
    set<ll>x,y;
    for(ll i=0; i<m ; i++)
    {
        ll k,l;
        cin>>k>>l;
        x.insert(k);
        y.insert(l);
        ll x1=x.size();
        ll y1=y.size();
        sum=x1*n +y1*n-(x1*y1);


       cout<<c-sum<<" ";

    }

    cout<<endl;
}

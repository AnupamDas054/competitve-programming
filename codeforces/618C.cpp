#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
int main()
{
    ll a,x,y;
    cin>>a;
    vector<pair< pair< ll,ll > ,ll > >p;
    map < map<ll,ll> ,ll  >m1;
    for(int i=0 ;i<a ; i++)
    {
        cin>>x>>y;
        if(x>=0  && y>=0)
        p.push_back({{y,x+y},i+1});
        //m1.insert(make_pair(make_pair(x,y),i+1));
    }
    sort(p.begin(),p.end());
    for(int i=0;i<a-1;i++)
    {
        if(p[i].first.first == p[i+1].first.first && p[i].first.second>p[i+1].first.second)
        {
            swap(p[i].first.second,p[i+1].first.second);
            swap(p[i].second,p[i+1].second);
        }
        if( ( p[i].first.first) > ( p[i+1].first.first ) )
        {
            swap( p[i].first.first, p[i+1].first.first);
            swap( p[i].first.second,p[i+1].first.second);
            swap( p[i].second,p[i+1].second);
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<p[i].second<<" ";
    }
    return 0;
}

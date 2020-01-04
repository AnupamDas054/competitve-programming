#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int x1,y1;
    vector<pair<int,int> >v;
    for(int i=0;i<m;i++)
    {
       cin>>x1>>y1;
       v.push_back({x1,y1});
    }
    vector<int> v1={v[0].first,v[0].second};

    for(int x : v1){
            int all=0;
    vector<int>v3(n+1);

    for(int i=1;i<m;i++)
    {
        if(v[i].first!=x  && v[i].second!=x)
        {
            int m1= v[i].first;
            int m2= v[i].second;
            v3[m1]++;
            v3[m2]++;
            all++;
        }
    }
    //cout<<"pampers\n";
    if(*max_element(v3.begin(),v3.end())==all)
    {
        cout<<"YES\n";
        return 0;
    }
   // cout<<"pampers2"<<endl;
    }
    cout<<"NO\n";
    return 0;
}

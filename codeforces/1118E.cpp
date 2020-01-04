#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;

    vector< pair<int,int> >v;
    int m=0,sign=0;
    for(int i=1;i<=b;i++)
    {
        for(int j=i+1;j<=b;j++)
        {
           // cout<<i<<" "<<j<<endl;
           v.push_back({i,j});
            m++;
            if(m==a){
                sign=1;
                break;
            }
           // cout<<j<<" "<<i<<endl;
           v.push_back({j,i});
            m++;
             if(m==a){
                sign=1;
                break;}
        }
        if(sign==1)
            break;
    }
    //cout<<v.size();
    if(v.size()==a)
    {
        cout<<"YES\n";
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}

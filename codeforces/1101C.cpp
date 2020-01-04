#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a ,pair<int,int> b)
{
    return (a.first<b.first || a.first==b.first) && a.second>b.second;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,l,r;
        cin>>n;
        vector< pair<int,int> >v;
        for(int i=0;i<n;i++)
        {
            cin>>l>>r;
            v.push_back({l,r});
        }
        sort(v.begin(),v.end(),cmp);
        //for(int i=0;i<n;i++)
          //  cout<<v[i].first<<" "<<v[i].second<<endl;
        if((v[0].first<=v[n-1].first && v[0].second>=v[n-1].first)||(v[0].first==v[n-1].first || v[0].first==v[n-1].second || v[0].second==v[n-1].first || v[0].second==v[n-1].second) )
        {
            cout<<-1<<endl;

        }
        else
        {
            vector<int>v1;
            v1.push_back(1);
            for(int i=1;i<n;i++)
            {
                if(v[0].first<=v[i].first && v[0].second>=v[i].first)
                {
                  v1.push_back(1);
                }
                else
                {
                    v1.push_back(2);
                }
            }
            for(int i=0;i<n;i++)
                cout<<v1[i]<<" ";
                cout<<endl;
        }


    }
}

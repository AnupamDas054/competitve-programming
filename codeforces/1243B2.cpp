#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        map<char,int>m;
        for(int i=0;i<n ;i++ )
        {
            m[s1[i]]++;
            m[s2[i]]++;
        }
        int flag=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            int k1=it->second;
            if(k1%2)
            {
                flag=1;
                cout<<"No"<<endl;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Yes"<<endl;
            vector< pair<int,int> > v;
            for(int i=0;i<n;i++)
            {
                flag=0;
                if(s1[i]!=s2[i]){
                for(int j=i+1;j<n;j++)
                {
                 if(s1[i]==s1[j])
                 {
                     swap(s1[j],s2[i]);
                     v.push_back({j+1,i+1});
                     flag=2;
                     break;
                 }
                }
                 if(flag!=2)
                 {
                     for(int j=i+1;j<n;j++){
                     if(s1[i]==s2[j])
                     {
                         swap(s1[j],s2[j]);
                         v.push_back({j+1,j+1});
                         swap(s1[j],s2[i]);
                         v.push_back({j+1,i+1});
                         break;
                     }
                     }
                 }
                }
              }
              int k3=v.size();
              cout<<k3<<endl;
             for(int i=0;i<k3;i++)
                cout<<v[i].first<<" "<<v[i].second<<endl;
        }

        }
    }



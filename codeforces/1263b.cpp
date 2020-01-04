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
        string s[n+1];
        vector< pair<int,string> >v,v2;
        map<string,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            if(m.find(s[i])== m.end())
            {
                m[s[i]]=1;
                v2.push_back({i,s[i]});
            }
            else
            {
                v.push_back({i,s[i]});
            }
        }
        int v1=v.size();
        int cnt=0;
        for(int i=0;i<v1;i++)
        {
            string s1=v[i].second;
            int flag=0;
            for(int i1=0;i1<4;i1++)
            {
                for(int j=0;j<10;j++)
                {
                    s1[i1]= j+'0';
                    if(m.find(s1)==m.end())
                    {
                        m[s1]=1;
                        cnt++;
                        flag=1;

                        v2.push_back({v[i].first,s1});
                        break;
                    }
                    else
                    {
                        s1=v[i].second;

                    }
                }
                if(flag==1)
                    break;
            }
        }
        sort(v2.begin(),v2.end());
        //cout<<v2.size()<<endl;
        cout<<cnt<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<v2[i].second<<endl;
        }
    }
    return 0;

}

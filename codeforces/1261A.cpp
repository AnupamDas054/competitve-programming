#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        string s;
        cin>>s;
        string ans;
        int flag=0;
        for(int i=0 ; i<p-1; i++)
        {
            ans=ans+'(';
            ans=ans+')';
        }
        //cout<<ans<<endl;
        int res=(n-(p-1)*2);
        if(p==1)
            res=n;
        for(int i=0;i<res/2;i++)
            ans=ans+'(';
        for(int i=0;i<res/2;i++)
            ans=ans+')';
       // cout<<ans<<endl;
        flag=1;
        vector< pair<int,int> >v;
        for(int i=0;i<s.size();i++)
        {
              if(s[i]!=ans[i])
                for(int j=i+1;j<ans.size();j++)
                {
                    if(s[j]==ans[i])
                    {
                        flag=2;
                        reverse(s.begin()+i ,s.begin()+j+1);
                        v.push_back({i+1,j+1});
                        //cout<<i+1<<" "<<j+1<<endl;
                        break;
                    }
                }

        }
        int k1=v.size();
        cout<<k1<<endl;
        for(int i=0;i<k1;i++)
            cout<<v[i].first<<" "<<v[i].second<<endl;


    }
    return 0;

}

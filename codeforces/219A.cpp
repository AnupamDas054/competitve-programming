#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int> m;
    map< char, int > ::iterator it;

    if(k==1)
    {
        cout<<s<<endl;
        return 0;
    }

    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;
    }
    for(it=m.begin();it!=m.end();it++)
    {
        int k1=it->second;
        if(k1%k!=0){
            cout<<"-1"<<endl;
            return 0;
        }


    }
    int m4=k;
    while(m4--)
    {
        for(it=m.begin();it!=m.end();it++)
    {
        int k2=it->second;

        int k3=k2/k;
       // cout<<k3<<endl;
        while(k3--)
        {
            cout<<it->first;
        }

    }
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
string s;
int k,n;
vector<char>v;
vector<string>v1;
map<string,int>m;
void subset(int i)
{
    if(i==n)
    {
        string s1="";
        if(v.size()==k)
        {
            for(int j=0;j<k;j++){
              s1=s1+v[j];
            }
//            string s2=s1;
//            sort(s2.begin(),s2.end());
//            if(m.find(s2)== m.end())
//            {
//                m[s2]=1;
//                v1.push_back(s1);
//
//            }
            v1.push_back(s1);
        }
        return ;
    }
    v.push_back(s[i]);
    subset(i+1);
    v.pop_back();
     while(s[i]==s[i+1])
        i++;
    subset(i+1);
}
int main()
{

    while(cin>>s)
    {
        cin>>k;
        n=s.size();
        sort(s.begin(),s.end());
        subset(0);
        int n1=v1.size();
        sort(v1.begin(),v1.end());

        for(int i=0;i<n1;i++)
            cout<<v1[i]<<endl;
        v1.clear();
        m.clear();
    }
    return 0;
}

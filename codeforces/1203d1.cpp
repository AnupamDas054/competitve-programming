#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int k=s.size();
    int k1=t.size();
    vector<int>v;
    int flag=0,l=0;
    for(int i=0;i<k;i++)
    {
        if(s[i]==t[0]){
                l=i;
        for(int j=1;j<k1;j++)
        {
           // cout<<j<<endl;

            if(s[i+1]==t[j])
            {
                flag=1;
                i++;
            }
            else
            {
               // cout<<"asjdf"<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            int m1=k-i-1;
           // cout<<m1 <<" "<<l<<endl;
            v.push_back(max(m1,l));
        }
       }
    }
   // cout<<v.size()<<"dff"<<endl;
    if(v.size()>0)
    cout<<*max_element(v.begin(),v.end())<<endl;
}

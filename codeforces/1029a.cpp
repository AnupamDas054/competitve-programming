#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++)
    {
        for(int j=i)

    }
    if(cnt==0)
    {
        for(int i=0;i<k;i++)
        {
            cout<<s;
        }
        cout<<endl;
    }
    else
    {
        string s1;
        for(int i=0;i<(n-cnt);i++)
        {
            s1=s1+s[i];
        }
        for(int i=0;i<k;i++)
        {

            cout<<s1;
        }
        for(int i=n-cnt;i<n;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
}

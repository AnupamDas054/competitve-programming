#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,b,c;
    cin>>k>>b>>c;
    string s;
    cin>>s;
    int m=0;
    for(int i=k-1;i>=k-c;i--)
    {
        if(s[i]=='1')
            m++;
    }
    if(s[k-1-c]=='0')
        m++;
    //cout<<m<<endl;
    for(int i=k-c-2;i>k-b-1;i--)
    {
        if(s[i]=='1')
            m++;
    }
    cout<<m<<endl;
    return 0;

}

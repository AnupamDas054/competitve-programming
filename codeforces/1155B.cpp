#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;

    for(int i=0;i<n-10;i++)
    {
        if(s[i]=='8')
            cnt++;
    }
    int k1=n-10;
    if(k1/2+1<=cnt)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}

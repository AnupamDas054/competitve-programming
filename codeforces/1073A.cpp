#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)
    {
        cout<<"NO\n";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            cout<<"YES\n";
            cout<<s[i]<<s[i+1]<<endl;
            break;
        }
        if(i==n-2)
        {
            cout<<"NO\n";
            break;
        }
    }
}

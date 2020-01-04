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
        string s;
        cin>>s;
        int k=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='8')
            {
                k=i;
                break;
            }
        }
        if(k!=-1 &&n-k>=11)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
}

#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;
    int k=s.size();
    for(int i=0;i<5;i++)
    {
        string s1;
        cin>>s1;
        for(int j=0;j<s1.size();j++)
        {
            if(j==k)
            {
                break;
            }
            if(s1[j]==s[j])
            {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}

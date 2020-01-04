#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int j=n;
    for(int i=n-1;i>=1;i--)
    {
        if(s[i]<s[i-1])
        {
            cout<<"YES\n";
            cout<<i<<" "<<i+1<<endl;
            return 0;
        }

    }
    cout<<"NO\n";

    return 0;
}

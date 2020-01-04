#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        sum=sum+(s[i]-'0');
    }
    if(sum==0 || (n%2!=0))
    return 0;
}

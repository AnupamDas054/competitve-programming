#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    long long int sum=0;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>k;

        m[k/100]++;
    }
    if(m[1]>0 && m[2]>0){
    if(m[1]%2==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    }
    else if(m[1]>0 && m[2]==0)
    {
        if(m[1]%2==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    }
    else if(m[2]>0 && m[1]==0)
    {
    if(m[2]%2==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    }
    return 0;
}

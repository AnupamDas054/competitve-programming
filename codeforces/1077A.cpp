#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        if(k==1)
        {
            cout<<a<<endl;
        }
        else if(k%2==0)
        {
            cout<<(a*(k/2))-(b*(k/2))<<endl;
        }
        else
        {
            long long  k2=k/2+1;
            long long k3=(k-(k2));
            cout<<(a*k2)-(b*k3)<<endl;
        }
    }
}

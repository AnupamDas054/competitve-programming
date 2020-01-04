#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long int n,k;
        cin>>n>>k;
        long long cnt=0,k1=n;
        while(n!=0)
        {
             n=n/k;
             if(n==k1)
             {
                 cnt=n-1;
                 break;
             }
             if(n==0)
                break;
             cnt+=(n%k);
        }
        cout<<cnt<<endl;
    }
}

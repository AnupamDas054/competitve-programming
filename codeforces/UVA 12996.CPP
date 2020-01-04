#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=1;i<=test;i++)
    {
        int n,limit;
        cin>>n>>limit;
        int k=0,j1=0;
        int arr[n+56];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            k=k+arr[j];
        }
        if(k>limit)
        {
           cout<<"Case "<<i<<": "<<"No\n";
           j1=1;
        }
        int m;
        for(int j=0;j<n;j++)
        {
            cin>>m;
            if( j1==0 && m<arr[j])
            {
                j1=1;
                cout<<"Case "<<i<<": "<<"No\n";
                break;
            }
        }
        if(j1==0)
        {
            cout<<"Case "<<i<<": "<<"Yes\n";
        }
    }
    return 0;
}

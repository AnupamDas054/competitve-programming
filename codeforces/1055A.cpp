#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int k,sign=0;
    int arr[n+1],arr1[n+1];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];

    }
    if(!arr[0])
    {
        cout<<"NO\n";
    }
    else if(arr[m-1]==0 )
    {
        if(arr)
        cout<<"NO\n";
    }
    else if(arr[m-1]==0 && (arr[n-1]==0 || arr[n-1]==1)  && (arr1[n]))
    {
        cout<<"NO\n";
    }
    else
        cout<<"YES\n";
}

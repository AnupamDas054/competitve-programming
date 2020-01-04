#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int arr[n+2];
    int sign=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    if(arr[n-1]==5)
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
   return 0;
}

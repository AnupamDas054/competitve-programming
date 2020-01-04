#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    long sum=0;
    for(int i=0;i<n;i=i+2)
    {
        sum+=(arr[i+1]-arr[i]);
    }
    cout<<sum<<endl;
}

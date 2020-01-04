#include<bits/stdc++.h>

using namespace std;
int n;
bool subset(int arr[],int i,int sum)
{
    if(i==n)
    {
        if(sum%360==0)
            return true;
        else
            return false;
    }
    return subset(arr,i+1,sum+arr[i])||subset(arr,i+1,sum-arr[i]);
}
int main()
{
    int k=0,sum=0;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(subset(arr,0,0)==true)
    {
        cout<<"YES\n";

    }
    else
    {
        cout<<"NO\n";
    }
}

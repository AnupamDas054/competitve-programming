#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=arr[i+1]-arr[i];
    v.push_back(arr[0]);
    for(int i=1;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]==k)
        {
            v.push_back(arr[i]);
        }
        else
        {
            break;
        }
    }
}

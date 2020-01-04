#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sign=0;
    if(arr[0]==arr[1])
    {
        sign=1;
    }

    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            if(i+2<n)
            swap(arr[i+1],arr[i+2]);
        }
    }
    if(sign==1)
    {
        for(int i=1;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<arr[0]<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

    return 0;
}

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
    int k=1,c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=k)
        {
            //cout<<arr[i];
            c++;
            k++;
        }
    }
    cout<<c<<endl;
}

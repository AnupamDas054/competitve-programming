#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        long long day=0;
        if(arr[0]+arr[1]<=arr[2])
        {

                cout<<arr[1]+arr[0]<<endl;
        }
        else
        {
            int m=arr[1]-arr[0];
            arr[1]=arr[1]-m;
            cout<<m+arr[1]<<endl;
        }
    }
    return 0;
}

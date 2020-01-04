#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    long long int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    long long int mx=arr[n-1];
    long long int sum=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(mx==1)
            break;
        if(mx<arr[i] && arr[i]>=1)
        {
            sum+=(mx-1);
            //cout<<i<<" "<<sum<<endl;
            mx--;
        }
        if(arr[i]<=mx)
        {
            sum+=arr[i];
          //  cout<<i<<" "<<sum<<endl;
            mx=arr[i];
        }

    }
    cout<<sum<<endl;
    return 0;
}

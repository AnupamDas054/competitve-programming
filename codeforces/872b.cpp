#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    long long int  arr[n+1];
    long long int mx=INT_MIN,mi=INT_MAX;

    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
        if(arr[i]<mi){
            mi=arr[i];
        }
    }

    if(k==1)
    {
        cout<<mi<<endl;
    }
    else if(k>=3)
    {
        cout<<mx<<endl;
    }
    else
    {
        long long mi1=arr[0],mx1=INT_MIN,mi2=arr[n-1];
        for(int i=0;i<n;i++)
        {
            if(mi1==mx)
            {
                break;
                cout<<mx<<endl;
            }
            if(arr[i]<mi1)
            {
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(mi2==mx)
            {
                cout<<mi2<<endl;
                return 0;
            }
            if(arr[i]<mi2)
                break;

        }
        if(mi1>mi2)
        {
            cout<<mi1<<endl;
            return 0;
        }
        else
        {
            cout<<mi2<<endl;
            return 0;
        }

    }

    return 0;
}

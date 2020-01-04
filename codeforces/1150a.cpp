#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m,t;
    cin>>n>>m>>t;
    int arr[n+2],arr1[m+3];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    sort(arr,arr+n);
    sort(arr1,arr1+m);
    int k=arr[0];
    int k1=arr1[m-1];
    if(k>=k1)
        cout<<t<<endl;
    else
    {
        int m2=t/arr[0];
        cout<<(k1*m2)+(t%arr[0])<<endl;
    }
    return 0;
}

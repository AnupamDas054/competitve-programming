#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=0,k1=0;
    cin>>n;
    int arr[n+3];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==2)
    {
        cout<<"0"<<endl;
        return 0;
    }
    sort(arr,arr+n);

    int chek[9]={0};
    int l1=arr[n-1]-arr[1];
    int l2=arr[n-2]-arr[0];
//    chek[2]=k1-arr[0]
    if(l1<l2)
    cout<<l1<<endl;
    else
        cout<<l2<<endl;


    return 0;
}

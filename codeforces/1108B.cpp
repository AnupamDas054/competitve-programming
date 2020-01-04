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
    cout<<arr[n-1]<<" ";
    for(int i=n-2;i>=0;i--)
    {
        if((arr[n-1]%arr[i])!=0)
        {
        cout<<arr[i]<<endl;
        return 0;
        }
    }
    int ca=0;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==arr[i-1]){
            ca=arr[i];
            break;
        }
    }
//    for(int i=n-2;i>=0;i--)
//    {
//        if((arr[i]%ca)==0 && ca!=1)
//        {
//            cout<<ca<<endl;
//            cout<<arr[i]<<endl;
//            return 0;
//        }
//   }

    cout<<ca<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n;cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int prev=INT_MAX;
    int after=0;
    if(arr[0]==1)
    {
        after++;
        prev=arr[0];

    }
    else if(arr[0]-1>0)
    {
        after++;
        prev=arr[0]-1;
    }
    else if(n>=2 && arr[0]+1<arr[1])
    {
        after++;
        prev=arr[0]+1;
    }

    for(int i=1;i<n;i++)
    {

        if(arr[i]-1>prev)
        {
            after++;
            prev=arr[i]-1;
        }
        else if(arr[i]>prev)
        {
//           if(i!=(n-1))
//           {
//               if(arr[i]<arr[i+1])
//               {
//                   prev=arr[i];
//                   after++;
//               }
//
//           }
//           else if(i==n-1)
//           {
//               after++;
//           }
             prev=arr[i];
             after++;
        }
        else if(arr[i]+1>prev)
        {
            prev=arr[i]+1;
            after++;
        }
    }
    cout<<after<<endl;
    return 0;
}

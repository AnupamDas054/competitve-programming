#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,m=0;
    cin>>t;
    long long int sum=0;
    int arr[t+1];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        if(arr[i]>m)
            m=arr[i];
    }
   int k=0;
   for(int i=1;;i++)
   {
       if(t*i>sum*2)
       {
         k=i;
           break;
       }
   }
   if(k<m)
   {
       cout<<k+(m-k)<<endl;
   }
   else
    cout<<k<<endl;
    return 0;
}

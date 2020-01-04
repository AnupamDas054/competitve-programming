#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    long long int arr[n+2]={0},b[n+2]={0};
    long long int c=0,l=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i]>>b[i];
        if(i==1)
        {
            long int k=max(arr[i-1],b[i-1]);
            long long k1=min(arr[i],b[i]);

            if(k1-k>=0)
                c=c+k1-k+1;
            l=k1;
           // cout<<l<<endl;
            continue;
        }
        if((arr[i]>0 && b[i]>=0) || (arr[i]>=0 && b[i]>0))
        {
            long int k=max(arr[i-1],b[i-1]);
            long long k1=min(arr[i],b[i]);
            long long k2=min(arr[i-1],b[i-1]);
            if(k1-k>=0 && k!=k2)
                c=c+k1-k+1;
            else if(k1-k>=0)
                {
                c=c+k1-k;
              //  cout<<"ysdj"<<endl;
                }

          //  cout<<l<<endl;
        }

    }
    cout<<c<<endl;

    return 0;

}

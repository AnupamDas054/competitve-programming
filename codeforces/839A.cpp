#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,k;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int n1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=8){
           n1+=8;
           if(n1>=k)
           {
               cout<<i+1<<endl;
               return 0;
           }
           if(i!=n-1)
           arr[i+1]=arr[i+1]+arr[i]-8;
        }
        else
        {
            n1=n1+arr[i];
            if(n1>=k)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}

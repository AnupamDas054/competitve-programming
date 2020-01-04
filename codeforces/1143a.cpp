#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,u=0,z=0;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            z++;
        }
        else
        {
            u++;
        }
    }
    if(u==0 || z==0)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            z--;
            if(z==0)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
        else
        {
            u--;
            if(u==0)
            {
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
    cout<<n<<endl;
    return 0;
}

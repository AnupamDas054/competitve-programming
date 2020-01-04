#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n,r;
        cin>>n>>r;
        int visited[n+1]={0};
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        cout<<"yes\n"<<endl;
        long long int cnt=0;
        int now=0,k=0,c=0;
        for(int j=n-1;j>=0;j--)
        {
            cout<<3<<endl;

            if(visited[arr[j]]==1)
            {
                cout<<56<<endl;
                continue;
            }
            else
            {
                visited[arr[j]]=1;
            }

            cout<<14<<endl;
            if(c+k==n)
                break;
            cout<<31<<endl;
            cnt+=r;
            c++;
            if(c+k==n)
                break;
            for(int i=now;i<=j-1 ;i++)
            {
                if(c+k==n)
                    break;
                if(arr[i]-cnt>0)
                {
                    now=i;
                    break;
                }
                else
                    k++;
                if(visited[arr[i]])
                {
                    continue;
                }
                else
                    visited[arr[i]]=1;

            }

        }
        cout<<c+k<<endl;
    }
    return 0;
}



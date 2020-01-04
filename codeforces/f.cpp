#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n,m,x,y;
     cin>>n;
     int arr[100000];
    arr[0]=0;
    bool sign[100000]={1};
    long long int max1[100000]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if( arr[i]>0 )
        {
            max1[i] = max1[i-1]+arr[i];
            if(sign[i-1]==0)
            {
                sign[i]=0;
            }
        }
        else
        {
            max1[i]=max1[i-1];
            if(sign[i-1]==0)
            {
                sign[i]=0;
            }
        }
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        if(sign[x]==0 && sign[y]==0)
        {
            vector<int> v(arr+x,arr+y);
            sort(v.begin(),v.end());
            cout<<v[v.size()-1]<<endl;
        }
         else  if(x==y)
           cout<<arr[x]<<endl;
           else
        cout<<(max1[y]-max1[x-1])<<endl;
    }

    return 0;
}

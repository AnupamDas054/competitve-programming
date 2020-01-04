#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+2];
    vector<int>v,v1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>=0)
        {
            v.push_back(arr[i]);
        }
        else
        {
            v1.push_back(abs(arr[i]));
        }

    }
    sort(v1.rbegin(),v1.rend());
    sort(v.begin(),v.end());
    long long sum=0;
     int k=v1.size();
    if(k!=0)
    {
        for(int i=0;i<k;i++)
        {
            sum=sum+v1[i];
        }
          cout<<sum<<endl;
    }
    else
    {
      cout<<v[0]<<endl;

    }

}

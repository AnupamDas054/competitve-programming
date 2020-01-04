#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    vector< int > v1,vis;
    vector< pair<int,int> >v;
    vis.assign(200005,0);
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        v.push_back(make_pair(arr[i],i+1));
    }
    int cnt=0;
    sort(v.begin(),v.end());
    long long com1=0,com2=0;

    for(int i=n-1;i>=0;i--)
    {
        long long int s1=sum-v[i].first;
        if(i==n-1)
            com1=v[n-2].first;
        else
            com1=v[n-1].first;
        if(s1-com1==com1)
        {
           cnt++;
         v1.push_back(v[i].second);
        }
    }

    cout<<cnt<<endl;
    int k=v1.size();
    for(int i=0;i<k;i++)
        cout<<v1[i]<<" ";
    cout<<endl;
    return 0;
}

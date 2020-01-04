#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[n+2];
    vector<long long int>even,odd,v;
    map<long long int ,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]%2)
        {
            if(m.find(arr[i])==m.end()){
            odd.push_back(arr[i]);
            }
            m[arr[i]]++;
        }
        else
        {
             if(m.find(arr[i])==m.end()){
            even.push_back(arr[i]);
            }
            m[arr[i]]++;

        }
    }
    int k=even.size();
    int k1=odd.size();
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k1;j++)
        {
            if(abs(even[i]-odd[j])==1)
            {
                v.push_back(even[i]);
                v.push_back(odd[j]);
            }
        }
    }
    int total;
    if(v.size())
     total=m[v[0]];
    else if(k==n || k1==n)
    {
        total=0;
    }
    else
        total=1;
    for(int i=1;i<v.size();i++)
    {
        if(m[v[i]]<=total)
            total=m[v[i]];
    }
    cout<<total<<endl;

}

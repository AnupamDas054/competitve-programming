#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>m;
    map<int,int> :: iterator it;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    vector< int > v,v1,v2;
    for(it=m.begin();it!=m.end();it++)
    {
        int k=it->second;
        if(k==1)
        {
            v.push_back(it->first);
        }
        if(k>2)
        {
            v1.push_back(it->first);
        }
        if(k==2)
        {
            v2.push_back(it->first);
        }
    }
    int v3 = v.size();
    int v4=v1.size();
    if(v3%2!=0 && v4==0)
    {
        cout<<"NO\n";
    }
    else
    {

    }

    return 0;
}

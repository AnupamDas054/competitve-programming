#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int d,k1;double k;
    cin>>d>>k;
    int m2=INT_MIN;
    map<int ,int>m;
    map<int,int> :: iterator it;
    for(int i=0;i<d;i++)
    {
        cin>>k1;
        m[k1]++;
    }
    for(it=m.begin();it!=m.end();it++)
    {
        int k2=it->second;
        if(k2>m2)
        {
            m2=k2;
        }
    }
    int s=0;
    int k3=m2;
    int k4=(ceil(k3/k))*k;
    for(it=m.begin();it!=m.end();it++)
    {
        s+=(k4-it->second);
    }
    cout<<s<<endl;

    return 0;
}

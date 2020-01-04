#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    set<string>s;
    for(int i=0; i<n; i++)
    {
        int k,l;
        string s;
        cin>>k>>s;
        l=m[s];
        if(l>k){m[s]=k;s1.insert(s);}
        v.push_back({k,s});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {

    }
    return 0;
}

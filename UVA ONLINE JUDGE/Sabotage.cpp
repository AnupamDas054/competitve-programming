#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<n;i++)
        cout<<v[i]<<endl;
}

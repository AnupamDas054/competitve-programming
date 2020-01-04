#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    set<int>s;
    vector< pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(s.find(arr[i])==s.end())
        {
            s.insert(arr[i]);
            v.push_back({i+1,arr[i]});
        }
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1].first-v[0].first<<endl;

    return 0;
}

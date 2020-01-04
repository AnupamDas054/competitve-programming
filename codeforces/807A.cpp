#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,s=0;
    cin>>n;
    vector< pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        cin>>k>>l;
        v.push_back({k,l});
        if(k!=l)
        {
            s=1;
        }
    }
    if(s==1)
    {
        cout<<"rated\n";
        return 0;
    }
    for(int i=0;i<n-1;i++)
    {
        if(v[i].first==v[i].second && (v[i].first>=v[i+1].first))
        {

        }
        else
        {
            cout<<"unrated\n";
            return 0;
        }
    }
    cout<<"maybe\n";
}

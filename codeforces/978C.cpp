#include<bits/stdc++.h>

using namespace std;
#define ll long long int


int main()
{

    int n,m;
    cin>>n>>m;
    vector<ll>a(n+1,0);
    a[0]=0;
    for(int i=0; i<n; i++)
    {
        ll k;
        cin>>k;
        a[i+1]=a[i]+k;
    }
    for(int i=0;i<m;i++)
    {
        ll k;
        cin>>k;
        auto it=lower_bound(a.begin(),a.end(),k)-a.begin();
      //  cout<<it<<endl;

        cout<<it<<" "<<k-a[it-1]<<endl;

    }
    return 0;
}

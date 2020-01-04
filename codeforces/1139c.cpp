#include<bits/stdc++.h>

using namespace std;
#define ll long long int
const int n1 = 2e5 + 5;
const int mod = 1e9 + 7;
ll pow1(ll base, ll power)
{

    if(power==0)
        return 1;
     if((power%2)==0)
     {

         return pow1((base*base)%mod,(power/2));
     }
     else
     {
         return (base*pow1((base*base)%mod,((power-1)/2)))%mod;
     }
}

int s;vector<int>g[n1];int vis[n1];
void dfs(int n2)
{
    if(vis[n2])
        return;
    s++;
    vis[n2]=1;
  //  cout<<n2<<endl;
    for(auto &it:g[n2]){

        dfs(it);

    }
}
int main()
{
   int n,k;
   cin>>n>>k;
   // cout<<(2,4);
   for(int i=0;i<n-1;i++)
    {
        int u,v,x;
        cin>>u>>v>>x;
        if(x==0)
        {
            g[u].push_back(v);
            g[v].push_back(u);
        }
    }
    ll ans;
    ans=pow1(n,k);
    for(int i=1;i<=n;i++)
    {

        if(vis[i])
            continue;
        s=0;
        dfs(i);
        ans=(ans-pow1(s,k))%mod;
        ans+=mod;
        ans=ans%mod;

    }
    cout<<ans<<endl;
    return 0;
}

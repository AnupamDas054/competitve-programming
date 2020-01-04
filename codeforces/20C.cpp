#include<bits/stdc++.h>
#define inf 2e18
using namespace std;
typedef long long int ll;
typedef  pair<int,ll> pii;

ll d[200009],t[200009];
vector<pii>adj[200009];
void dykstra()
{
    priority_queue<pii,vector<pii>,greater<pii> >q;
    q.push({d[1]=0,1});
    while(!q.empty())
    {
        int u=q.top().second;
        q.pop();
        for(auto e: adj[u])
        {
            int v=e.second;
            ll dist=e.first;
          //  cout<<"v "<<v<<"dist "<<" "<<dist<<endl;
            if(d[v]>dist+d[u])
            {
                t[v]=u;
                d[v]=d[u]+dist;
                q.push({d[v],v});
            }
        }
    }

}
void trace(int k)
{
    if(t[k]!=-1)
        trace(t[k]);
    printf("%d ",k);
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({w,v});
        adj[v].push_back({w,u});
    }

    fill(d,d+n+9,inf);
    fill(t,t+n+9,-1);

    dykstra();
    //cout<<t[n]<<endl;
    if(d[n]==inf)
    {
        cout<<-1<<endl;
        return 0;
    }
    trace(t[n]);

    printf("%d\n",n);

    return 0;
}

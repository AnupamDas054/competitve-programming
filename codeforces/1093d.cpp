#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int> adj[300007];
int visited[300009]={0};
const int mod=998244353 ;
long long int a=0,b=0,flag=0;
void dfs(int i)
{
    if(visited[i]==1)
        a++;
    else
        b++;
    for(auto &it:adj[i])
    {
        if(visited[it]==0)
        {
           //cout<<"it "<<it<<endl;
            if(visited[i]==1)
                visited[it]=2;
            else if(visited[i]==2)
                visited[it]=1;
            dfs(it);
        }
        else if(visited[i]==visited[it])
            flag=1;
    }
    //cout<<"a "<<a<<" b "<<b<<endl;

}

ll pow1(ll base, ll power)
{

  /*  if(power==0)
        return 1;
     if((power%2)==0)
     {

         return pow1((base*base)%mod,(power/2));
     }
     else
     {
         return (base*pow1((base*base)%mod,((power-1)/2)))%mod;
     }*/
     ll ls=1;
     while(power)
     {
         if(power&1)
         ls=((ls%mod) * (base%mod))%mod;
         power=power>>1;
         base=base*base%mod;


     }
     return ls;
}

int main()
{

    int t;
    scanf("%d",&t);
    while(t--){

    int n,m;
    scanf("%d%d",&n,&m);
   // int parent[300007]={0};
    for(int i=0;i<=n;i++){
       adj[i].clear();
       }
     memset(visited,0,sizeof(visited));
     flag=0;

    for(int i=0;i<m;i++)
    {
        int u,v;
        scanf("%d%d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll ans=1;
    for(int i=1;i<=n;i++)
    {
        a=0,b=0;
        if(visited[i]==0)
        {
            //cout<<"main i"<<i<<endl;
            visited[i]=1;
            dfs(i);
            ans=(ans*(pow1(2,a)+pow1(2,b))%mod)%mod;

        }

    }
    if(flag==1)
    {
        printf("0\n");
    }
    else{

        printf("%d\n",ans);
    }



    }

    return 0;
}

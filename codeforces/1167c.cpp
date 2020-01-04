#include<bits/stdc++.h>
using namespace std;
bool v[500005]={false};
vector<int>adj[500002+2];
int v2[500005]={0};
void bfs(int s)
{
    v[s]=true;
    queue<int>q;
    vector<int>v1;
    q.push(s);
    int c=1;
    v1.push_back(s);
    while(!q.empty())
    {
        int k=q.front();
        q.pop();
        for(int i=0;i<adj[k].size();i++)
        {
            if(v[adj[k][i]]==false)
            {
              //  cout<<adj[k][i]<<endl;
                v1.push_back(adj[k][i]);
                c++;
                v[adj[k][i]]=true;
                q.push(adj[k][i]);

            }

        }

    }
   // cout<<v1.size()<<endl;
    for(int i=0;i<v1.size();i++)
    {
       // cout<<v1[i]<<endl;

        v2[v1[i]]=c;
    }
}
int main()
{

    int n,m;
    cin>>n>>m;
    int m1[n+1]={0};
    for(int i=0 ; i<m ;i++)
    {
        int k;
        cin>>k;
        int m,m1;
        for(int j=0;j<k;j++)
        {

            if(j==0){
            cin>>m;

            }
            else
            {
                cin>>m1;
                adj[m].push_back(m1);
                adj[m1].push_back(m);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i]==false)
        {
            bfs(i);
            cout<<v2[i]<<" ";
        }
        else
        {
            cout<<v2[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}

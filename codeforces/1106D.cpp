#include<bits/stdc++.h>

using namespace std;



vector<int>v[100009];
int visited[100009]={0};
/*void dfs(int i)
{
    if(visited[i]==1)
        return ;

    visited[i]=1;
    cout<<i<<" ";
    for(auto&it:v[i])
    {
        dfs(it);
    }
}*/
void bfs(int i)
{
    priority_queue<int, vector<int>, greater<int> >q;
    q.push(i);
    visited[i]=1;
    while(!q.empty())
    {
        int u=q.top();
        q.pop();
        cout<<u<<" ";
        for(auto &it: v[u])
        {
            if(!visited[it])
            {
                visited[it]=1;
                q.push(it);
            }
        }
    }
}
int main()
{

    int n,e,a,b;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
   /* for(int i=0;i<n;i++)
    {
        sort(v[i].begin(),v[i].end());
    }
    dfs(1);*/
    bfs(1);
    cout<<endl;
}

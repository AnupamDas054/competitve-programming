#include <bits/stdc++.h>

using namespace std;
#define Inf 2147483647
#define white 0
#define gray 1
#define black 2

#define MAX 1000


int c1[MAX], d[MAX], m2[MAX];

vector < int > adj[MAX];

int n1, edge;

int dis = 0 ;



int test(int source)
{
    int i,j;
    for(i=1; i<=n1; i++)
    {
        c1[i] = white;
        d[i]=Inf;
        m2[i] = nt;
    }

    c1[source] = gray;
    d[source] = 0;
    m2[source] = nt;

    queue < int > Q;
    Q.push(source);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(j = 0; j < adj[u].size(); j++)
        {
            int v = adj[u][j];
            if(c1[v] == white)
            {
                c1[v] = gray;
                d[v] = d[u]+1;
                m2[v] = u;
                Q.push(v);
            }
        }
        c1[u] = black;
    }
}


int main()
{
    int i,j,k;

     int s = 1;

    while(scanf("%d",&edge)==1) {

        map <int , int> m;

        memset(adj,NULL,sizeof(adj));
        memset(c1, 0 , sizeof(c1));
        memset (m2, 0 , sizeof(m2));
        memset ( d , 0 , sizeof(d));

        if(edge == 0)
        break;
     int index = 1;

    for(i=0; i< edge; i++)
    {
        int x, y;
        scanf("%d%d",&x,&y);
        if(!m[x])
        m[x] = index++;

        if(!m[y])
        m[y] = index++;

        adj[m[x]].push_back(m[y]);
        adj[m[y]].push_back(m[x]);
    }

    n1 = index -1 ;

    int f , to ;
    while(scanf("%d %d",&f,&to)==2)
    {
        int count = 0;
        if(f == 0 && to ==0)
        break ;
        test(m[f]);
        for(j=1;j<index;j++)
        {
            if(d[j]> to)
            count++;
        }

        printf("Case %d: %d nodes not reachable f node %d with TTL = %d.\n",s,count,f, to);
        s++;
    }
  }
}

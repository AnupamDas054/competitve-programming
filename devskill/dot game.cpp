#include<bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define uu first
#define vv second
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

int d[100][100],vis[100][100];
string s[100];
int row,col;
int  bfs(int sx,int sy,int m)
{
    int cnt=1;
    char c;
    if( m==1 )
    {
        c='*';
    }
    else
        c='.';
	vis[sx][sy]=1;
	queue<pii>q;
	q.push(pii(sx,sy));
	while(!q.empty())
	{
		pii top=q.front(); q.pop();
		for(int k=0;k<4;k++)
		{
			int tx=top.uu+fx[k];
			int ty=top.vv+fy[k];
			if(tx>=0 && tx<row && ty>=0 && ty<col && s[tx][ty]!='X' && vis[tx][ty]==0 && s[tx][ty]==c)
			{
			    cnt++;
				vis[tx][ty]=1;
				d[tx][ty]=d[top.uu][top.vv]+1;
				q.push(pii(tx,ty));
			}
		}
	}
	return cnt;
}
int main()
{
    cin>>col>>row;
    for(int i=0;i<row;i++)
        cin>>s[i];
    int tul=0,tan=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(vis[i][j]==0 && s[i][j]!='X')
            {
                if(s[i][j]=='*'){

                   int k=bfs(i,j,1);
                   if(k>tul)
                    tul=k;
                }
                if(s[i][j]=='.'){
                   int k=bfs(i,j,2);
                   if(k>tan)
                    tan=k;
                }
            }
        }
    }
    if(tul>tan)
    {
        cout<<"TULTUL WINS THE ROUND.\n";
    }

    else if(tan>tul)
    {
       cout<<"TASFIA WINS THE ROUND."<<endl;
    }
    else
    {
     cout<<"NOBODY LOSES."<<endl;
    }
}

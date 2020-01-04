#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    queue<int>q,q1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x,q.push(x);
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q1.push(x);
    }
    int vis[n+1]={0};
    int x=q.front();
    int cnt=0;
    int k=vis[x];
    int flag=0;
    while(!q1.empty())
    {
        while(k!=0)
        {
            ///cout<<x<<endl;
            q.pop();
            if(q.empty())
            {
                flag=1;
                break;
            }
            x=q.front();
            k=vis[x];
        }
        if(flag==1)
            break;
        int m=q1.front();
        if(m!=x)
        {
            q1.pop();

            vis[m]=1;
          //  cout<<m<<endl;
            cnt++;
        }
        else
        {
            q1.pop();
            q.pop();
            if(q.empty())
            {
                flag=1;
                break;
            }
            x=q.front();
            k=vis[x];
        }

    }
    cout<<cnt<<endl;

    return 0;
}


/*
5
3 5 2 1 4
4 3 2 5 1

*/

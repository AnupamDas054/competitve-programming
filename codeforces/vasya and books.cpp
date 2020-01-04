#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
     scanf("%d",&n);
    int k;
    queue<int>q;
    int m1[200002]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);
        q.push(k);
    }

    for(int i=0;i<n;i++)
    {
         scanf("%d",&k);
        int m=0;
        if(q.size()==0)
        {
            cout<<0<<" ";
            continue;
        }
        if(m1[k]==1)
        {
            cout<<"0"<<" ";
            continue;
        }
        while(q.front()!=k)
        {
         //   cout<<q.front()<<endl;
         m1[q.front()]++;
            m++;
            q.pop();
            if(q.size()==0)
                break;
        }
        if(q.size()!=0){
        m1[q.front()]++;
        m++;
        q.pop();
        }
        cout<<m<<" ";
    }
    return 0;
}

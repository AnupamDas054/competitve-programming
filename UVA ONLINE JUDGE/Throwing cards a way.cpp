#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
            vector<int>v;
            int k;
            queue<int>q;
            if(n==1)
            {
                 cout<<"Discarded cards:\n";
                cout<<"Remaining card: 1\n";
                continue;
            }
        for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
        while(1)
        {
            v.push_back(q.front());
            q.pop();
            int u=q.front();
            q.pop();
            q.push(u);
            if(q.size()==1)
                break;
        }
        cout<<"Discarded cards: ";
        int len=v.size();
        for(int i=0;i<len;i++){
            if(i==len-1)
            cout<<v[i]<<endl;
            else
            cout<<v[i]<<", ";
        }
        cout<<"Remaining card: ";
        cout<<q.front()<<endl;

    }
}

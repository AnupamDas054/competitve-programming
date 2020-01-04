#include<bits/stdc++.h>

using namespace std;
map<long long int,bool> visited;
 map<long long int,vector<long long int> >m1;
void dfs(long long i)
{
    visited[i]=true;
    cout<<i<<" ";
    for(auto it=0;it<m1[i].size();it++)
    {
        int k1=m1[i][it];
        if(!visited[k1])
        {
           dfs(k1);
        }

    }

}

int main()
{

    int n;
    cin>>n;
    map<long long int,int>m;

     map<long long int,int> :: iterator it;

    for(int i=0;i<n;i++)
    {
        long long k,k1;
        cin>>k>>k1;
        m[k]++;m[k1]++;
        visited[k1]=false;
        visited[k]=false;
        m1[k].push_back(k1);
        m1[k1].push_back(k);
    }
    long long k2;
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second==1)
        {
            k2=it->first;
        }
    }
    dfs(k2);
    return 0;
}

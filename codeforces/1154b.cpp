#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n;
    vector<int>v;
    set<int>v1;
    map<int,int>m;
    for(int i=0;i<n;i++){
        cin>>k;
        if(m.count(k))
        {
            continue;
        }
        else
        {
            m[k]=1;
            v.push_back(k);
        }
    }
    if(m.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }

    sort(v.rbegin(),v.rend());
    int s=v.size();
    for(int i=0;i<s-1;i++)
    {
        v1.insert(v[i]-v[i+1]);
    }
    if(m.size()>3)
    {
      cout<<-1<<endl;
      return 0;
    }

    int k1=v[0]-v[1];
    if(m.size()==2){

         if(k1%2==0){

            cout<<(v[0]-v[1])/2<<endl;
         }
         else
            cout<<v[0]-v[1]<<endl;
            }
    if(m.size()==3)
    {
        if(v[0]-v[1]==v[1]-v[2])
        {
            cout<<v[1]-v[2]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }





}

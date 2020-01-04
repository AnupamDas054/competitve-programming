#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    map<int,int>mark;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;

        if(mark[k]==0){
        v.push_back(k);
        mark[k]=1;
        }
    }
    if(v.size()==1){
        cout<<"N0"<<endl;
        return 0;
    }
    sort(v.begin(),v.end());
     cout<<v[1]<<endl;
    return 0;
}

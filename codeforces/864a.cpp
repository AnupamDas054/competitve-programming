#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,k;
    cin>>n;
    int arr[n+1];
    set<int>s;
    map<int,int>m;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
        m[arr[i]]++;

    }
    if(s.size()>2 || s.size()==1){
    cout<<"NO"<<endl;
    return 0;
    }
    auto it=s.begin();
     k=*it;
    it++;
    int k1=*it;
    if(m[k]==m[k1])
    {
        cout<<"YES\n";
        auto it=s.begin();
        cout<<*it<<" ";
        it++;
        cout<<*it<<endl;


    }
    else
    {
        cout<<"NO\n";

    }
    return 0;
}

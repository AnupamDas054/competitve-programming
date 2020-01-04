#include<bits/stdc++.h>
using namespace std;
int main(){


int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    set<int>s;
    s.insert(0);
    for(int i=1;i<=sqrt(n);i++)
    {
     s.insert(i);
     s.insert(n/i);
    }
    cout<<s.size()<<endl;
    for(auto g:s)
    {
        cout<<g<<" ";
    }
    cout<<endl;
}






return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef set< pair<int,int> > sii;


int main()
{

    int a,b;
    sii s;
    sii ::iterator it;
    for(int i=0;i<3;i++)
    {
        cin>>a>>b;
        s.insert(make_pair(a,b));
    }
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll a,d,l,r;
        cin>>a>>d>>l>>r;
        ll total=(a/d);
        ll before_left=(l-1)/d;
        ll last=(r/d);
        cout<<total-(last-before_left)<<endl;

    }
    return 0;
}

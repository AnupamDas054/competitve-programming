#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        float x;
        cin>>x;
        float s=(x*x);
        float m=(((((s*s)-(4*s))*acos(-1.0)))+(8*s))/32.0000;
       // cout<<m<<endl;
        printf("Case %d: %.4f\n",i,m);

    }
    return 0;
}

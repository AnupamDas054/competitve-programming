#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        float m,d;
        cin>>m>>d;
        float x=(m/d);
        //cout<<x<<endl;
        //cout<<"Case "<<i<<": "<<(4*pow(acos(-1.0),(1/3))*pow(x,(2/3)))<<endl;
        printf("Case %d: %.4f\n",i,(4.835975862)*pow(x,0.6666667));
    }
    return 0;
}

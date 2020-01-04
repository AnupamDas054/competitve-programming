#include<bits/stdc++.h>

using namespace std;

typedef long long  int  ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll a,b,c,k;
        scanf("%I64d%I64d%I64d",&a,&b,&c);
        if(a>=b)
        k=(a-b);
        else
            k=0;

        printf("%I64d\n",k*c);
    }

    return 0;

}

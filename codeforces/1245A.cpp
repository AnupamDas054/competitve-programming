#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int g= __gcd(a,b);
        if(g>1)
        {
            printf("Infinite\n");
        }
        else
        {
            printf("Finite\n");
        }
    }
}

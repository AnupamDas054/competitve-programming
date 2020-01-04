#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        float n;
        scanf("%f",&n);
        printf("%.2f\n",n+((n/100)*15));
    }
    return 0;
}

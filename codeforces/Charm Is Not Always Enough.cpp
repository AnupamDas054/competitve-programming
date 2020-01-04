#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        long long ans=0;
        for(int j=0;j<n;j++)
        {
            int k;
            scanf("%d",&k);

            if(k>=m)
            {

                int s=k/m;
                int res=k%m;
                long long total=0;
                if(res>0)
                total=(s+1)*m;
                else
                    total=s*m;
                ans=ans+(total-k);
            }
            else
            {
                ans=ans+(m-k);
            }
        }
        printf("%I64d\n",ans);
    }
}

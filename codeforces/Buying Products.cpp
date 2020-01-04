#include<bits/stdc++.h>

using namespace std;
int main()
{


    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        vector< pair<int ,int > >p;
        int  n,k;
        scanf("%d%d",&n,&k);
        for(int j=0;j<n;j++)
        {
            int n1,n2,n3;
            scanf("%d%d%d",&n1,&n2,&n3);
            p.push_back({n1,j+1});

            p.push_back({n2,j+1});
            p.push_back({n3,j+1});


        }
        sort(p.begin(),p.end());
        int mark[n+2]={0};
        long long int sum=0;
        for(int j=0;j<p.size();j++)
        {
            if(k==0)
                break;
            int k1=p[j].second;
            if(mark[k1]!=2)
            {
                sum+=p[j].first;
                k--;
                mark[k1]++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

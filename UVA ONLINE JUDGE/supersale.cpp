#include<bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int Vi[1023],Wi[1023];
        for(int i=1;i<=n;i++)
        {
            cin>>Vi[i]>>Wi[i];
        }
        int k,m;
        scanf("%d",&k);
        long long int sum=0;
        for(int j=0;j<k;j++)
        {
          cin>>m;
        int C[1023][123];
        for (int i=1;i<=n ;i++) C[i][0] = 0;

        for (int w=0;w<=m;w++) C[0][w] = 0;

        for (int i=1;i<=n;i++) {

        for (int w=1;w<=m;w++) {

         if (Wi[i] > w)

         C[i][w] = C[i-1][w];

         else

         C[i][w] = max(C[i-1][w] , C[i-1][w-Wi[i]]+Vi[i]);

        }
 }
 sum+=C[n][m];
        }

    cout<<sum<<endl;
    }

    return 0;
}


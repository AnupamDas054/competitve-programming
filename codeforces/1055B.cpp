#include<bits/stdc++.h>


using namespace std;

typedef long long int ll;

int main()
{
   int n,m,a;
   ll q,k;
   scanf("%d%I64d%d",&n,&q,&m);

   vector<ll>v;
   ll max1=INT_MIN;
   for(int i=0;i<n;i++)
   {
       scanf("%I64d",&k);
       v.push_back(k);
       if(max1<k)
        max1=k;
   }
   ll initial=0;
   while(q--)
   {
       scanf("%d",&a);

       if(a==0)
       {
           if(max1<initial && initial>m)
            printf("%I64d",(initial-m));
           else if(max1<initial && initial < m)
           {
               printf("0\n");
           }
           else
           {
               printf("0\n");
           }
           initial=0;
       }
       else if(a==1)
       {
           int a1;
           scanf("%d%I64d",&a1,&k);
           v[a1-1]+=k;
           initial =v[a1-1];
       }
   }
   return 0;
}

#include<bits/stdc++.h>
using namespace std;
double  n,p,x;
double val(int m )
{
    return n*pow((1+p),m);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){

       scanf("%lf%lf%lf",&n,&p,&x);
       p=p/100;
        int  ans=0;
       int l=0,h=1000006;
       while(l<=h)
       {
           int mid=(l+h)/2;
           if(val(mid)>=x)
           {
               ans=mid;
               h=mid-1;
           }
           else
           {
               l=mid+1;
           }
       }
       printf("Case %d: %d\n",i,ans);

    }
    return 0;
}

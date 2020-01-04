#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
bool cmp(pair<ll,ll>a, pair<ll,ll>b)
{
    return a.first>b.first && a.second>b.second;
}
int main()
{
    int n;
    scanf("%d",&n);
    ll  l,r,k,k1,a,a1;
    char  c;
    vector< pair<ll,ll> >v;
    long long int ma=INT_MIN;
    long long int mi=INT_MIN;


    for(int i=0;i<n;i++)
    {
        scanf(" %c",&c);
        if(c=='+')
        {
           scanf("%I64d%I64d",&l,&r);
         if(l<r)
            swap(l,r);
          if(l>ma)
         {
             ma=l;

         }
         if(r>mi)
            mi=r;
        }
        else
        {
            scanf("%I64d%I64d",&a,&a1);
            int sign=0;
           // int m=v.size();
           // sort(v.begin(),v.end(),cmp);
//            for(int k=0;k<m;k++){
//            if((v[k].first<=l && v[k].second<=r) ||(v[k].second<=l && v[k].first<=r))
//            {
//                sign=1;
//            }
//            else
//            {
//
//                sign=0;
//                break;
//            }
//            }
            if((ma<=a && mi<=a1)||(ma<=a1 && mi<=a))
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}

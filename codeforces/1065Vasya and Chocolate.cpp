#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{

   int t;
   cin>>t;
   while(t--)
   {
       ll a,b,c,d;
       cin>>a>>b>>c>>d;
       ll k=((a)/(d));
       //cout<<k<<endl;
       cout<<(k)+((k/b)*c)<<endl;

   }


}

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{

    ll n,a,b;
    vector< ll > a1,b1;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;

        a1.push_back(a+b);
       // b1.push_back({b,a});
    }
   sort(a1.rbegin(),a1.rend());
  // sort(b1.rbegin(),b1.rend());
  // ll m1=a1[0].first+a1[0].second;
  // ll m2=b1[0].first+b1[0].second;
  /* if(m1>m2)
   {
       cout<<m1<<endl;
   }
   else
   {
       cout<<m2<<endl;
   }*/
   cout<<a1[0]<<endl;

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   long long int k,m,sum=0,m2,m3=0,k3;
   cin>>n>>k>>m;
   vector<long long int >arr;
   for(int i=0;i<n;i++){
    cin>>m2;
    arr.push_back(m2);
   }
   sort(arr.rbegin(),arr.rend());

   if(k>m)
   {
       long long int k1=(k/(m+1));
      // cout<<k1<<endl;
       long long int k2=(k%(m+1));
       long long int k3=(k1);
       cout<<(arr[0]*(k1*m+k2))+(arr[1]*k3)<<endl;
   }
   else
   {
     cout<<(arr[0]*k)<<endl;
   }



   return 0;
}

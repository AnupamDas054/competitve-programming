#include<bits/stdc++.h>
using namespace std;

int main()
{

   int n;
   cin>>n;
   int a[n+3],b[n+3],state[n+3]={0};
   string s;
   cin>>s;
   int k=0;
   for(int i=0;i<n;i++){


    cin>>a[i]>>b[i];
    if(s[i]=='1'){
        k++;
    }
        state[i]=1;

   }

   for(int i=1; i<5; i++)
   {

       int cnt=0;

       for(int j=0; j<n; j++)
       {
          // cout<<i<<" "<<state[j]<<endl;
//           if(b[j]==i && state[j]>=1 )
//           {
//               state[j]=-a[j]+1;
//               continue;

           //}
           if( b[j]>i && s[j]=='0' ){
            cout<<"jyes"<<endl;
            continue;
           }
            //cout<<b[j]<<" "<<j+1<<" "<<endl;
           // cout<<i<<" "<<state[j]<<endl;
           if(state[j] == a[j])
           {
               state[j]=-a[j]+1;
               cnt++;
               //cout<<i<<" "<<state[j]<<endl;
           }
           else if(state[j]<=0)
           {
               state[j]++;
              // cout<<i<<" "<<state[j]<<endl;
           }
           else
           {
               state[j]++;
               cnt++;
              // cout<<i<<" "<<state[j]<<endl;

           }
           cout<<cnt<<" "<<j+1<<" "<<state[j]<<endl;

       }
       cout<<i<<" "<<cnt<<endl;
       if(k<cnt)
        k=cnt;
   }

   cout<<k<<endl;


}

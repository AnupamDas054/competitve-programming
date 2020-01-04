#include<bits/stdc++.h>

using namespace std;

int main()
{

  int n;
  cin>>n;

  string s;
  cin>>s;

  int cnt=0,sign=0;
  int mx=INT_MAX;
  for(int i=0;i<n;i++)
  {
      cnt=0;
      sign=0;
      for(int j=0;j<4;j++ )
      {
          if(i+4<=n)
          {
              sign=1;

              int k=int(s[i+j]);
             // cout<<k<<endl;
              if(j==0)
              {
                  if(k==65)
                  {
                      continue;
                  }
                  else
                  {
                      int k2;
                      k2=abs(k-65);
                      int k1=26-k2;

                      cnt=cnt+min(k1,k2);
                  }
              }
              else if(j==1)
              {
                  if(k==67)
                  {
                      continue;
                  }
                  else
                  {

                      int k2;
                      k2=abs(k-67);
                      int k1=26-k2;
                      cnt=cnt+min(k1,k2);
                   // cout<<cnt<<endl;

                  }
              }
              else if(j==2)
              {
                  if(k==84)
                  {
                      continue;
                  }
                  else
                  {
                     int k2=abs(k-84);
                     int k1=26-k2;
                      cnt=cnt+min(k1,k2);
                   //   cout<<cnt<<endl;

                  }
              }
              else
              {

                  if(k==71)
                  {
                      continue;
                  }
                  else
                  {
                     // int k1=90-k+6;
                     int  k2=abs(k-71);
                      int k1=26-k2;
                      cnt=cnt+min(k1,k2);


                  }
              }

          }

      }
      //cout<<cnt<<endl;

       if(mx>cnt && sign==1)
          mx=cnt;

  }


cout<<mx<<endl;

   return 0;
}

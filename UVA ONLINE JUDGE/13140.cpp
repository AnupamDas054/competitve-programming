#include<bits/stdc++.h>

using namespace std;
bool isPerfectSquare(long long int x)
{
  long double sr = sqrt(x);

  return ((sr - floor(sr)) == 0);
}
int main()
{
    int cnt=0;
    for(int i=16;;i++)
    {
        int k=i*i;
        int sum=0;
        while(k!=0)
        {
            sum+=(k%10);
            k/=10;
        }
        //cout<<sum<<endl;
       if(isPerfectSquare(sum))
       {
           cnt++;
          // cout<<sum<<" "<<cnt<<endl;
           if(cnt==7)
           {
               int m1=i-6;
               for(int j=m1;j<=i;j++)
               {
                   printf("%d %d\n",j,(j*j));
               }
               return 0;
           }
       }
       else
        cnt=0;
    }
}

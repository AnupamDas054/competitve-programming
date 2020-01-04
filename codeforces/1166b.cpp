#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   if(n<25)
   {
       cout<<"-1"<<endl;
       return 0;
   }
   int s=sqrt(n);
   int l1=0;


   int k=0,l=0,l2=1;
   for(int i=5;i<=n;i++)
   {
       if((n%i)==0 && (n/i)>=5)
       {
           l2=0;
           l=i;
           k=n/i;
       }
   }

   if(l2==1)
   {
       cout<<"-1"<<endl;
       return 0;
   }

   int sign=1;
   for(int i=1;i<=l;i++)
   {
       int m1=sign;
       for(int j=0;j<k;j++)
       {
           if(sign==1)
           {
               cout<<"a";
               sign=2;
           }
            else if(sign==2)
           {
               cout<<"e";
               sign=3;
           }
            else if(sign==3)
           {
               cout<<"i";
               sign=4;
           }
            else if(sign==4)
           {
               cout<<"o";
               sign=5;
           }
            else if(sign==5)
           {
               cout<<"u";
               sign=1;
           }
       }
       m1++;
       if(m1<=5)
       {
           sign=m1;
       }
       if(m1>5)
       {
           sign=1;
       }



   }

   cout<<endl;
}

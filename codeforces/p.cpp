#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
bool leap_year(ll y)
{
    if((y%400==0) || ((y%4==0) && (y%100!=0)))
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;

    string m1,m2;
    int d1,d2,y1,y2;
    char ch;
    for(int i=1;i<=t;i++)
    {
        cin>> m1 >> d1 >> ch >> y1;
        cin>>m2>>d2>>ch>>y2;
        ll cnt=0;int sign=0;
        ll m=0,m11=0;

//        for(ll i=y1+1;i<=y2-1;i++)
//        {
//            if(leap_year(i)==1)
//            {
//                m=i;
//                break;
//            }
//        }
//        for(ll i=y2-1;i>=y1+1;i--)
//        {
//            if(leap_year(i)==1)
//            {
//                sign=1;
//                m11=i;
//                break;
//            }
//       }
   // cout<<" m22"<<m11<<endl;
      ll m22=(y2-y1-2);
      if(m22>0)
      {

          ll leap =(10/1000)*m22;
          cnt=(m22/4)-leap;
      }
   //   cout<<"cnt "<<cnt<<endl;
        if(m1=="February" || m1=="January")
        {
            if(leap_year(y1))
                cnt++;
        }
      //  cout<<cnt<<endl;
        if(y1==y2)
        {
            cout<<"Case "<<i<<": "<<cnt<<endl;
            continue;
        }
         if( m2=="January")
        {
            cout<<"Case "<<i<<": "<<cnt<<endl;
            continue;
        }
        else if(  m2=="February")
        {
            if(d2<=29 )
            {
                if(leap_year(y2))
                {
                   cout<<"Case "<<i<<": "<<cnt+1<<endl;
                    continue;
                }
                else
                {
                    cout<<"Case "<<i<<": "<<cnt<<endl;
                   continue;
                }
            }
        }
        else
        {

            if(leap_year(y2))
                {
                   cout<<"Case "<<i<<": "<<cnt+1<<endl;
                    continue;
                }
                else
                {
                    cout<<"Case "<<i<<": "<<cnt<<endl;
                   continue;
                }
        }

    }

}


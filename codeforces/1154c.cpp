#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll m1=a/3;
    ll m2=b/2;
    ll m3=c/2;

    ll m4=min(m1,min(m2,m3));
    ll m5,m6,m7;
      m5=a-m4*3;
        m6=b-m4*2;
       m7=c-m4*2;

    ll arr[9];
    arr[1]=1;arr[2]=1;arr[3]=2;arr[4]=3;arr[5]=1;arr[6]=3;arr[7]=2;
    a=a-m4;
    b=b-m4;
    c=c-m4;
    ll cnt=0,mx=0;



    for(int i=1;i<=7;i++)
    {
        cnt=0;
        a=m5,b=m6,c=m7;
        for(int j=i;;)
        {
            if(arr[j]==1)
            {
                if(a>0)
                {
                    a--;
                    cnt++;
                }
                else{
                    if(cnt>mx)
                        mx=cnt;
                    break;
                }
            }
            else if(arr[j]==2)
            {
                if(b>0)
                {
                    cnt++;
                    b--;

                }
                else{
                    if(cnt>mx)
                    mx=cnt;
                    break;
                }
            }
            else
            {
                if(c>0)
                {
                    cnt++;
                    c--;
                }
                else
                {
                    if(cnt>mx)
                        mx=cnt;
                    break;
                }
            }
            if(cnt>mx)
                mx=cnt;
            j++;
            if(j>7)
            {
                j=1;
            }
        }
    }
    cout<<m4*7+mx<<endl;

}


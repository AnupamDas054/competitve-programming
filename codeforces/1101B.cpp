#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int k=s.size();
    int i=0,j=0,cnt=0,sign=0,sign1=0;
    for( i=0;i<k;i++)
    {
        if(sign==0)
        {
            if(s[i]=='[')
            {
                cnt++;
                sign=1;
            }
        }
        else if(sign==1)
        {
            if(s[i]==':')
            {
                cnt++;
                j=i;
                break;

            }
        }
//        if(sign==2)
//        {
//            if(s[i]=='|')
//            {
//                cnt++;
//                j=i;
//                break;
//            }
//        }
    }
   // cout<<i<<endl;
    if(i==k)
    {
        cout<<"-1"<<endl;
        return 0;
    }

    for(int m=k-1;m>=j+1;m--)
    {
        if(sign1==0)
        {
            if(s[m]==']')
            {
                cnt++;
                sign1=1;
            }
        }
        if(sign1==1)
        {
            if(s[m]==':')
            {
                sign1=2;
                cnt++;
            }
        }
        if(sign1==2)
        {
            if(s[m]=='|')
            {
                cnt++;
            }
        }
    }
    if(sign1==2 )
    {
        cout<<cnt<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}

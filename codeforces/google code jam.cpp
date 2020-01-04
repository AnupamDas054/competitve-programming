#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int d,c=1,sum=0,sign=0;
    cin>>d;
    string s;
    cin>>s;
    int si=s.size();
    int k1=0,k2=0;
    for(int i=0;i<si;i++)
    {
        if(s[i]=='S'){
            sum=sum+c;
            k1++;
        }
        if(s[i]=='C'){
            k2++;

            c=c*2;
           }

    }

    //cout<<sum<<endl;
    if(k1==si)
    {
        if(d<k1)
        {
            cout<<"IMPOSSIBLE\n";

        }
        else{
            cout<<"0\n";
        }
    }
    else if(k2==si)
    {
        cout<<0<<endl;
    }
     else if(sum<=d)
     {
         cout<<0<<endl;
     }
    else
    {


    }
    return 0;
}

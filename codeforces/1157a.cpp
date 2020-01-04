#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,n1;
    cin>>n;
    n1=n;
    map<long long int,bool>m;
    m[n]=true;
    long long cnt=1,sign=0;
    while(1)
    {
        if(n%10==0 && sign== 1)
        {
            while(n%10==0)
            {
                n=n/10;
            }
            if(m[n]==false){
                    cnt++;
                m[n]=true;
                //cout<<n<<endl;
            }
            else
                break;
        }
        else
            {
            sign=1;
            n=n+1;
           // cout<<n<<endl;
         if(n%10==0)
        {
            while(n%10==0)
            {
                n=n/10;
            }
            if(m[n]==false){
                m[n]=true;
             //   cout<<n<<endl;
            }
            else
                break;
        }
        else{
            if(m[n]==true)
               break;
            m[n]=true;
        }
    }
    }
    cout<<m.size()<<endl;
}

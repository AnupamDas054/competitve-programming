#include<bits/stdc++.h>
using namespace std;
long long int prod(long long int k)
{
    long long int pro=1;
    while(k)
    {
        pro=pro*(k%10);
        k/=10;
    }
    return pro;
}

int main()
{

    long long int n,c=0,k=0,n1;
    cin>>n;
    n1=n;
    long ans=n;
    string a = to_string(n1);

    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='0')
            continue;

        string curr=a;

        curr[i]=((curr[i]-'0')-1)+'0';
        //cout<<curr[i]<<endl;

        for(int j=i+1; j<curr.size(); j++){
            curr[j]='9';

           // cout<<curr[i]<<endl;
        }
        long long int  num=0;
        //cout<<curr<<endl;
        for(auto c:curr)
            num=num*10+(c-'0');

        if(num>=1 && prod(num)>prod(ans) )
        {
            ans=num;
        }

    }

  cout<<prod(ans)<<endl;
    return 0;
}

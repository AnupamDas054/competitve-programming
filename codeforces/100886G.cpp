#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll prod(ll x)
{
    ll pro=1;
    while(x)
    {
        pro*=x%10;
        x/=10;
    }
    return pro;
}

ll find_prod(ll l, ll r)
{
    string a=to_string(l);
    string b=to_string(r);

    ll ans=r;

    for(int i=0;i<b.size();i++)
    {
        if(b[i]=='0')
          continue;
        string curr=b;
        curr[i]=((curr[i]-'0')-1)+'0';
        for(int j=i+1; j<curr.size();j++)
        {
            curr[j]='9';
        }
        ll num=0;
        for(auto c:curr)
        {
            num=num*10+(c-'0');
        }
         if (num >= l && prod(ans) < prod(num))
            ans = num;
    }
    return ans;
}

int main()
{
    ll l,r;
    cin>>l>>r;
    cout<<find_prod(l,r)<<endl;
}

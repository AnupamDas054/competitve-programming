#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{

    string s;
    cin>>s;
    ll k=0,n,u;
    cin>>n;
    for(int i=0;i<s.size();)
    {
        if((s[i]>='0' && s[i]<='9') &&  s[i+1]=='*')
        {
             k = k + ((s[i]-'0')*(s[i+2]-'0'));
             u=((s[i]-'0')*(s[i+2]-'0'));

             i=i+3;
             cout<<k<<endl;
             cout<<"u"<<u<<endl;
        }
        else if((s[i]>='0' && s[i]<='9') && s[i+1]=='+')
        {
             k=k+(s[i]-'0');
             i=i+2;
             cout<<k<<endl;
        }
        else if(s[i]=='+')
        {
            k=k+(s[i+1]-'0');
            //cout<<"esfda"<<k<<endl;
            i=i+2;
        }
        else if(s[i]=='*')
        {
            u=u*(s[i+1]-'0');
            cout<<"u2"<<u<<endl;
            k=k+u;
            i=i+2;
        }
    }
    cout<<k<<endl;
    return 0;

}

#include<bits/stdc++.h>
using namespace std;


long long int fac[12];
void fac1()
{
    fac[0]=1;
    for(int i=1;i<=10;i++)
    {
        fac[i]=(fac[i-1]*i);
    }
    return;
}
int main()
{
    fac1();
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        int n;
        cin>>n;
        int s1=s.size();
        int cnt=0;
        for(int i=0;i<s1;i++)
        {
            if(s[i]=='0'){
                cnt++;
                break;
                }
        }
         long long int k1=0,k=0;

         k=(fac[s1]/fac[s1-n]);
        if(cnt>0  && cnt!=s1){
         k1=(fac[s1-1])/fac[s1-n-1];
         cout<<k-k1<<endl;}
        else

        cout<<0<<endl;

    }
}

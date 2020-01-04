#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int k=s.size();
    if(k<=20)
    {
        cout<<1<<" "<<k<<endl<<s<<endl;
        return 0;
    }
    int k1,k2,cnt=0,i;
    for(i=20;i>=1;i--)
    {
         k1=k%i;
         k2=k/i;
         cnt++;
         if(k1==0)
            break;
        if(k1<=i-1)
            break;

    }
    cout<<k2+1<<" "<<i<<endl;
    int m=0;

    for(int i1=0;i1<k2;i1++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<s[m];
            m++;
        }
        cout<<endl;
    }
    int k4=i-k1;
    if(m<k){
    for(int j=0;;j++)
    {
        if(k1>0)
        {
            cout<<s[m];
            m++;
            k1--;
        }
        if(k4>0)
        {
            cout<<"*";
            k4--;
        }
        if(k1==0 && k4==0)
            break;
    }
    cout<<endl;
    }

    return 0;
}

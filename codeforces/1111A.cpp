#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s1,s2;
    cin>>s1>>s2;
    int k=s1.size();
    int k1=s2.size();
    int v1=0,v2=0,v3=0,v4=0;
    map<char,int>m;
    m['a']=m['e']=m['i']=m['o']=m['u']=1;
    if(k1!=k)
    {
        cout<<"No\n";
        return 0;
    }
    for(int i=0;i<k;i++)
    {
        if(s1[i]=='a' || s1[i]=='e' ||s1[i]=='i'||s1[i]=='o' || s1[i]=='u')
        {
            v1++;
        }
        else
            v2++;
    }
    for(int i=0;i<k1;i++)
    {
        if(s2[i]=='a' || s2[i]=='e' ||s2[i]=='i'||s2[i]=='o' || s2[i]=='u')
        {
            v3++;
        }
        else
            v4++;
    }
    int sign=0;
    if(v1==v3 && v2==v4)
    {

       for(int i=0;i<k;i++)
       {
           if(m[s1[i]]==m[s2[i]])
           {
               sign=1;
           }
           else
           {
               sign=2;
               break;
           }
       }
    }
    if(sign==1)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    return 0;
}

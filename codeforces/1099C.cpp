#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;

    int n;
    cin>>n;

    int k,m=0;
    k=s.size();

    for(int i=0; i<k; i++)
    {
        if(s[i]=='*' || s[i]=='?')
        {
            continue;
        }
        else
        {
            m++;
        }
    }
   //cout<<m<<endl;
    int k1=m;

    if(m>n)
    {
        for(int i=0;i<k-1;i++)
        {
            if((s[i+1]=='?' || s[i+1]=='*') && (s[i]!='?' && s[i]!='*'))
            {
                s[i]='?';
                k1--;
                if(k1==n)
                {
                   for(int i=0;i<k;i++)
                   {
                        if(s[i]=='?' || s[i]=='*')
                        {
                             continue;
                        }
                        else
                        {
                            cout<<s[i];
                        }
                   }
                   cout<<endl;
                   return 0;
                }
            }
        }
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(m<n)
    {
        vector<char>v;

        for(int i=0; i<k-1; i++)
        {
           if(( s[i+1]=='*' ) && (s[i]!= '?' &&  s[i]!= '*'))
           {
                v.push_back(s[i]);
                while(m!=n){
              //  cout<<"block1"<<i<<endl;
                  v.push_back(s[i]);

                  m++;
                  if(m==n)
                  {
                      break;
                  }
               }
               /////////////////
               for(int j=i+2;j<k;j++)
               {
                   if(s[j]=='?' || s[j]=='*')
                   {
                       continue;
                   }
                   else
                   {
                  //     cout<<m<<endl;
                       v.push_back(s[j]);
                   }
               }
               for(int i=0;i<v.size();i++)
               {
                   cout<<v[i];

               }
               return 0;
           }
           else if((s[i+1]=='?' ) && (s[i]!='?' && s[i]!='*'))
           {

                v.push_back(s[i]);
           }
           else if(s[i]!='*' && s[i]!='?')
           {
               v.push_back(s[i]);
           }
           if(i==k-2)
           {
               if( (s[i+1]!='?' && s[i+1]!='*'))
               {
                   v.push_back(s[i+1]);
               }
           }

        }
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(m==n)
    {
                   for(int i=0;i<k;i++)
                   {
                        if(s[i]=='?' || s[i]=='*')
                        {
                             continue;
                        }
                        else
                        {
                            cout<<s[i];
                        }
                   }
                   cout<<endl;
                   return 0;
    }
    return 0;
}

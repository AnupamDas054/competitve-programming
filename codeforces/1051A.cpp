#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int a=0,b=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                a++;
            }
            if(s[i]>='a' && s[i]<='z')
            {
                b++;
            }
            if(s[i]>='0' && s[i]<='9')
            {
                c++;
            }
        }
        if(a>0 && b>0 && c>0)
        {
            cout<<s<<endl;
        }
        else if(a==0 && b==0)
        {
           s[0]='A' ;s[1]='a';
           cout<<s<<endl;
        }
        else  if(a==0 && c==0)
        {
           s[0]='A' ;s[1]='1';
           cout<<s<<endl;
        }
        else  if(c==0 && b==0)
        {
           s[0]='1' ;s[1]='a';
           cout<<s<<endl;
        }
        else if(a==0)
        {
            int sa=0,s1=0;
          for(int i=0;i<s.size();i++)
          {

           if(s[i]>='a' && s[i]<='z')
           {
              if(sa==0)
               {
                   sa=1;
               }
               else
               {
                   s[i]='A';
                   break;
               }
           }

              else if(s[i]>='0' && s[i]<='9')
           {
               if(s1==0)
               {
                   s1=1;
               }
               else
               {
                   s[i]='A';
                   break;
               }
           }



          }
           cout<<s<<endl;
        }
        else if(b==0)
        {
            int sA=0,s1=0;
            for(int i=0;i<s.size();i++)
          {

            if(s[i]>='A' && s[i]<='Z')
           {
            if(sA==0)
               {
                   sA=1;
               }
               else
               {
                   s[i]='a';
                   break;
               }
           }
             else if(s[i]>='0' && s[i]<='9')
           {
               if(s1==0)
               {
                   s1=1;
               }
               else
               {
                   s[i]='b';
                   break;
               }
           }



          }
           cout<<s<<endl;
        }
        else if(c==0)
        {

            int sA=0,sa=0;
            for(int i=0;i<s.size();i++)
          {

               if(s[i]>='A' && s[i]<='Z')
           {
               if(sA==0)
               {
                   sA=1;
               }
               else
               {
                   s[i]='1';
                   break;
               }
           }
            else if(s[i]>='a' && s[i]<='z')
           {
               if(sa==0)
               {
                   sa=1;
               }
               else
               {
                   s[i]='1';
                   break;
               }
           }


          }
           cout<<s<<endl;
        }
    }
}

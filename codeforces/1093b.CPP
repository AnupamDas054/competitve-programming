#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s,s1;
        cin>>s;

        for(int i=s.size()-1;i>=0;i--)
        {
            s1+=s[i];
        }
        if((s.size()==2 && s==s1) || s.size()==1)
        cout<<-1<<endl;
        else if( (s!=s1))
        {
            cout<<s<<endl;
        }
        else
        {
          char c;
          int k;
          bool m=true;
          int k1=s.size();
          for(int i=0;i<k1-1;i++)
          {
              if(s[i]!=s[k1-1])
              {
                  c=s[i];
                  k=i;
                  m=false;
                  break;
              }

          }
          if(m==false){
          char c1=s[k1-1];
          s[k1-1]=c;
          s[k]=c1;
          cout<<s<<endl;
          }
          else
            cout<<-1<<endl;
        }

    }

    return 0;
}

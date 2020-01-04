#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char s[200005];
    cin>>s;
    int k=s[0]-'0';
    int l=-1;
    for(int i=1;i<n;i++)
    {
      int m=s[i]-'0';
      if(k<m)
      {
          l=i;
      }

    }
    if(l!=-1)
    {
        if(l1!=-1 && s[l1]<=(n-1))
        {
             memmove(&s[l1], &s[l1 + 1], strlen(s) - l1);

             cout<<s<<endl;

             return 0;
        }

        memmove(&s[l], &s[l + 1], strlen(s) - l);
    }
    else
    {
        memmove(&s[0], &s[0 + 1], strlen(s) - 0);
    }
    cout<<s<<endl;


    return 0;
}

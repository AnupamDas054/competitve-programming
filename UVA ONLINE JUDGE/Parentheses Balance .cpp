#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin,s);
        int l=s.size();
         if(s.compare("\n")==0)
        {
            printf("Yes\n");
            continue;
        }
        stack<char>s1;
        int sign =0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='(' || s[i]=='[')
                s1.push(s[i]);
            if(s[i]==')')
            {
                if(s1.size()==0)
                {
                    s1.push(s[i]);
                    break;
                }
                if(s1.top()=='(')
                    s1.pop();
                else
                {
                    sign=1;
                    break;
                }
            }
            if(s[i]==']')
            {
                if(s1.size()==0)
                {
                    s1.push(s[i]);
                    break;
                }
                if(s1.top()=='[')
                {
                    s1.pop();
                }
                else{
                    sign=1;
                    break;
                }
            }
        }
        if(sign==1 || (sign==0 && s1.size()!=0))
        {
            cout<<"No\n";
        }
        else
            cout<<"Yes\n";

    }
}

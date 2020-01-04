#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char>s1;
    int k=s.size();
    s1.push(s[0]);
    int k1=0,m=0;
    for(int i=1;i<k;i++)
    {
        if(s[i]=='(' )
        {
         s1.push(s[i]);
        }
        else
        {

            if(s1.size()!=0 && s1.top()=='(')
            {
            k1=k1+2;
            s1.pop();
            }
            else if(s1.size()!=0 && s1.top()==')')
            {
            m++;
            }

        }
    }
    cout<<k1<<endl;
    return 0;
}

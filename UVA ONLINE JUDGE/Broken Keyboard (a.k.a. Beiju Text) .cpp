#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int n=s.size();
        list<char> m;
        list<char> :: iterator it;

        it=m.begin();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='[')
            {
               it=m.begin();
            }
            else if(s[i]==']')
            {
                it=m.end();
            }
            else
            {
                m.insert(it,s[i]);
            }
        }
        for(it=m.begin();it!=m.end() ;it++)
        {

                cout<<*it;
        }
        cout<<endl;
    }


    return 0;
}

#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    int mx=INT_MIN;
    map<char,int>m;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {

            if(mx<c){
              //  cout<<i<<endl;
                mx=c;
            }
            c=0;
            m.clear();
        }
        if(m.find(s[i])==m.end() && s[i]>='a' && s[i]<='z')
        {
            m[s[i]]=1;
            c++;
            if(mx<c)
            {
                mx=c;
            }
        }
    }
    cout<<mx<<endl;
    return 0;
}

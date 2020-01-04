#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int k=s.size();
        int first=0,second=0;
        for(int j=0;j<k;j++)
        {
            if(s[j]=='(')
            {
                first++;
            }
            else
            {
                if(first==0)
                {
                    second++;
                }
                else
                    first--;
            }
        }
        cout<<first<<" "<<second<<endl;
    }
    return 0;
}

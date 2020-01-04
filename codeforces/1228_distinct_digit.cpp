#include<bits/stdc++.h>

using namespace std;

int main()
{

    int l,r;
    cin>>l>>r;
    for(int i=l+1;i<=r-1;i++)
    {
        int n=i;
        set<int>s;
        int ok=0;
        while(n!=0)
        {
            int m=n%10;
            //cout<<m<<endl;
            if(s.find(m)==s.end())
            {
                s.insert(m);
                ok=1;
            }
            else
            {
                ok=0;
                break;

            }
            n/=10;

        }
        if(ok==1)
        {
            cout<<i<<endl;
            return 0;
        }

    }
    cout<<"-1"<<endl;
    return 0;
}

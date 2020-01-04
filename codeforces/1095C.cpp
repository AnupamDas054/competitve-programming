#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    int l=__builtin_popcount(n);
    if(l>k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        vector<int>v;
        priority_queue< long long int >p;
        for(int c=31;c>=0;c--)
        {
            int m1=n>>c;
            if(m1&1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        int s=v.size();
        for(int i=s-1,k1=0,n1=0;i>=0;i--,k1++)
        {
            if(n1==l)
                break;
            if(v[i]==1)
            {
               n1++;
              // v1.push_back(pow(2,k1));
              // cout<<pow(2,k1)<<endl;
              p.push( pow(2,k1));
            }
        }
        k=k-p.size();
        while(k!=0)
        {
            //sort(v1.rbegin(),v1.rend());
            long long int k2=p.top();
            p.pop();
            if(k2==0 || k2==1)
            {
                cout<<"NO\n";
                return 0;
            }
            long long int k3=k2/2;

            p.push(k3);
            p.push(k3);
            k--;
        }
        cout<<"YES\n";
        int n2=p.size();
       while(p.empty()!=1)
       {
           cout<<p.top()<<" ";
           p.pop();
       }

        cout<<endl;
    }

    return 0;
}

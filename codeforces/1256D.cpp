#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>> n >>k;
        string s;
        cin>>s;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
//                int j=i;
//                while(j!=0 && k!=0 && s[j-1]!='0')
//                {
//                    swap(s[j],s[j-1]);
//                    k--;
//                    j--;
//                }
              v.push_back(i);

            }
        }
        int k1=v.size();
        int init=0;
        for(int i=0;i<k1;i++)
        {
            if(init==v[i]){
                init++;
                continue;
            }

                int k2=v[i]-init;
                if(k2<=k)
                {
                    swap(s[init],s[v[i]]);
                    init++;
                    k-=k2;
                }
                else if(k2>k && k>0)
                {
                   // cout<<k<<endl;
                    int pos=v[i]-k;
                   // cout<<pos<<" "<<init<<endl;
                    swap(s[v[i]],s[pos]);
                    break;

                }
                else
                    break;


        }
        cout<<s<<endl;
    }
    return 0;
}

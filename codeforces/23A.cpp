#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int n=s.size();
    string m;
    vector<int>v;
    int max1=0;
    for(int i=0;i<n;i++)
    {
        m=s[i];
        for(int j=i+1;j<n;j++)
        {
            m=m+s[j];
            int cnt=0;
            int si=m.size();
            //cout<<m<<endl;
            for(int k=j;k+si<n;k++)
            {
//               string m1=s.substr(k,si);
//               cout<<m<<" "<<m1<<endl;
                   for(int k1=k;k1<k+k1;k)
                if(m1==m)
                    cnt++;
                if(cnt>=2)
                {
                    if(si>max1)
                        max1=si;
                        break;
                }
            }

        }

    }
  //int k=*max_element(v.begin(),v.end());
cout<<max1<<endl;

    return 0;
}

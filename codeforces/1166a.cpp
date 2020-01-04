#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    map<char,int>m;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        m[s[0]]++;
    }
    int sum=0;
    for(char c='a' ; c<='z' ;c++)
    {
        if(m[c]!=0)
        {
            if(m[c]%2==0 && m[c]>2)
            {
                int k=(m[c]/2)-1;

                sum+=(k*(k+1)/2)+(k*(k+1)/2);

            }
            if(m[c]%2!=0  && m[c]>1)
            {
                if(m[c]==3)
                {
                    sum=sum+1;
                }
                else
                {
                    int k=(m[c]/2);
                    int k1=k+1;
                    k--;
                    k1--;
                    sum+=(k*(k+1)/2)+(k1*(k1+1)/2);


                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}

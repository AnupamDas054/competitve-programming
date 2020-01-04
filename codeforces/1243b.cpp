#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    while(n--)
    {

        int  t;
        cin>>t;
        string s1,s2;
        cin>>s1>>s2;
        int cnt=0;vector<int>v;
        for(int i=0;i<t;i++)
        {
            if(s1[i]!=s2[i])
            {
                cnt++;
                v.push_back(i);
                if(cnt>2)
                {
                    break;

                }
            }
        }

        if(cnt>2)
        {
            cout<<"No"<<endl;
        }
        else if(cnt==1 && t==2)
        {
            cout<<"No"<<endl;
        }
        else
        {
            //cout<<v[0]<<v[1]<<endl;

            char c1=s1[v[0]],c2=s2[v[0]],c3=s1[v[1]],c4=s2[v[1]];
            string s3,s4,s5,s6;
            s3=s1;s3[v[0]]=c4;
            s4=s2;s4[v[1]]=c1;
            s5=s1;s5[v[1]]=c2;
            s6=s2;s6[v[0]]=c3;
            if(s3==s4 || s5==s6)
            {
                cout<<"Yes\n";
            }
            else {
                cout<<"No\n";
            }

            //cout<<s3<<" "<<s4<<" "<<s5<<" "<<s6<<endl;
        }
    }
    return 0;
}

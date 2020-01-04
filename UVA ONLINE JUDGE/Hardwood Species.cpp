#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d\n",&t);

    while(t--)
    {
        string s;
        int c=0;
        vector<string>v;
        map<string,int>m,m1;
        while(1)
        {
            getline(cin,s);
            if(s[0]=='\0')
            {
                break;
            }
             m[s]++;
             c++;
            if(m1[s]==0){
            v.push_back(s);
           // cout<<s<<endl;
            }
            m1[s]=1;
        }

       sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       {
            cout<<v[i]<<" ";
            int k1=m[v[i]];
           printf("%.4lf\n",(((k1*100.00)/c)));
          // cout<<v[i]<<endl;
       }
       if(t>0)
        printf("\n");
    }
}

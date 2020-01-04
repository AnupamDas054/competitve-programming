#include<bits/stdc++.h>
using namespace std;
struct x
{

    long long int l,h;
    string s;
};
bool cmp(struct x a,struct x b)
{
  return a.l<b.l;
}
int main()
{
    int t;
    cin>>t;
    int t1=0;
    while(t--)
    {
        int n;
        cin>>n;
        t1++;
        struct x arr[n+3];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j].s>>arr[j].l>>arr[j].h;
        }
        sort(arr,arr+n,cmp);
        int q;
        cin>>q;
       // vector<int>v(n+3,-1);

        while(q--)
        {
            long long int k;
            cin>>k;
            int sign=0;
            int m=0;
            string s1;
            for(int i=0;i<n;i++)
            {
                if(k>=arr[i].l && k<=arr[i].h)
                {
                   m++;
                   if(m>1)
                   {
                       break;
                   }
                   s1=arr[i].s;

                }

            }
            if(m==1)
            {
                 cout<<s1<<endl;
            }
            else
            {
                cout<<"UNDETERMINED"<<endl;
            }


        }
        if(t1!=t)
        cout<<endl;
    }
}

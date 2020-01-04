#include<bits/stdc++.h>
using namespace std;

int main()
{

    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int cnt=0;
        int big=0;
        map<int,int>m;
        int arr[n]={0};
        int idx=0;
        for(int i=0;i<n;i++)
        {
              int k;
              cin>>k;
              if(m.find(k)==m.end())
                m[k]=1,arr[idx++]=k;
              else
                m[k]++;
              if(m[k]>big)
                big=m[k];
        }
        if(big>1)
            cout<<big<<endl;
        else
        {
            sort(arr,arr+idx);
            int flag=1;
            for(int i=1;i<idx;i++)
            {
                if(arr[i]-arr[i-1]<=1){

                    cout<<2<<endl;
                    flag=0;
                    break;
                }


            }
            if(flag==1)
            cout<<1<<endl;

        }
    }
    return 0;
}

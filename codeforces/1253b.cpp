#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    map<int,int>pos;
    int flag=0;
    int ans=0,ans1=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(arr[i]<0)
            {
               cout<<-1<<endl;
               return 0;
            }
            else
            {
                pos[arr[i]]=pos[arr[i]]+1;
                v1.push_back(arr[i]);
                ans++;
            }
        }
        else
        {
            if(arr[i]<0)
            {
                int k =-arr[i];
                if(pos[k]>0)
                {
                    pos[k]=pos[k]-1;

                    ans1++;
                    if(ans1==ans)
                    {

                        v.push_back(ans*2);

                        ans=0;ans1=0;
                    }
                }
                else
                {
                    flag=2;
                    break;
                }
            }
            else
            {
                pos[arr[i]]=pos[arr[i]]+1;
                v.push_back(arr[i]);
                if(pos[arr[i]]>1)
                {
                    flag=2;
                    break;
                }
                ans++;
            }
        }

    }
    if(flag==2)
    {
        cout<<-1<<endl;
        return 0;
    }

    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}

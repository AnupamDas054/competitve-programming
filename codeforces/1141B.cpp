#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n+2];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
        int mx=0,c=0,last=0,sign=0,prev=0;
         arr[0]=0;

    for(int i=1;i<=n;i++)
    {
        if(arr[i]==1)
        {
            if(arr[i-1]==1)
            {
                c=c+1;
                if(c>=mx)
                {
                    if(c==mx)
                    {
                        prev=i-c;
                    }
                    if(sign==0)
                    {
                        prev=i;
                        sign=1;
                    }
                    mx=c;
                    last=i;
                }
            }
            else
            {
                c=1;
                if(c>=mx)
                {
                    sign=1;
                    mx=c;
                    last=i;
                    prev=i;
                }
            }
        }
    }
  // cout<<prev<<" "<<last<<endl;
    if(last==n)
    {
        for(int i=1;i<prev;i++)
        {
            if(arr[i]==1)
            {
                mx=mx+1;
            }
            else
            {
                cout<<mx<<endl;
                return 0;
            }
        }
        cout<<mx<<endl;
        return 0;
    }
    else if(prev==1)
    {
        for(int i=n;i>last;i--)
        {
            if(arr[i]==1)
            {
                mx=mx+1;
            }
            else
            {
                cout<<mx<<endl;
                return 0;
            }
        }
        cout<<mx<<endl;
        return 0;
    }
    else
    {
        cout<<mx<<endl;
    }
    return 0;
}

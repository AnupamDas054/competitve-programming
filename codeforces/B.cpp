#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;int arr[n+2];
    set<int>s1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        s1.insert(arr[i]);
    }
    sort(arr,arr+n);int sign=0;
   /* for(int d=1;d<=n;d++){
            sign=0;
    for(int i=0;i<n/2;i++)
    {
          if(arr[i]+d==arr[n-i-1]-d)
            {

                sign=1;
            }
            else
            {
                sign=0;
                break;
            }

    }
       if(sign==1)
    {
        break;

    }

    }*/
    set<int>s;
    for(int j=n-1;j>=1;j--)
    {
        int k=arr[j]-arr[j-1];
        if(k!=0)
         s.insert(k);

        if(s.size()>1)
        {
            cout<<"-1"<<endl;
            return 0;
        }
    }

     if(n==2 || s1.size()==2)
    {

         auto it =s.begin();
         if(*it%2==0)
        cout<<*it/2<<endl;
        else
            cout<<*it<<endl;
    }
    else if(n!=2)
    {
     auto it =s.begin();
     cout<<*it<<endl;
    }

    else
    {
        cout<<"-1"<<endl;
        return 0;
    }

}

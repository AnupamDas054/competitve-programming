#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int even[102]={0};
    int odd[102]={0};
    if(n==1)
    {
        cout<<1<<endl;
    }
    if(n==2)
    {
        even[0]=1;
        even[1]=1;
        cout<<even[0]<<" "<<even[1]<<endl;
    }
    else{
      for(int j=1; j<=n; j++){
    if(j==1)
    {
        cout<<1<<endl;
    }
    else if(j==2)
    {
        even[0]=1;
        even[1]=1;
        cout<<even[0]<<" "<<even[1]<<endl;
    }
    else if(j%2==1)
    {
        int i;
        odd[0]=1;
        cout<<1<<" ";
        for( i=1;i<j-1;i++)
        {
            cout<<even[i]+even[i-1]<<" ";
            odd[i]=even[i]+even[i-1];
        }
        odd[i]=1;

        cout<<1<<endl;
    }
    else if(j%2==0)
    {
      int i;
      even[0]=1;
      cout<<1<<" ";
      for( i=1;i<j-1;i++)
      {
          cout<<odd[i]+odd[i-1]<<" ";
          even[i]=odd[i]+odd[i-1];
      }
      cout<<1<<endl;
      even[i]=1;
    }

    }
    }
    return 0;
}

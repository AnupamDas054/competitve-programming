#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
      long long a,b;
      cin>>a>>b;
      if(a>b)
      swap(a,b);

      if((a+b)%3==0 && a*2>=b)
      {
          cout<<"Yes"<<endl;
      }
      else
      {
          cout<<"No"<<endl;
      }
    }
    return 0;
}

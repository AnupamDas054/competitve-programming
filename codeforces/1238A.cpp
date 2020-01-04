#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
  long long int x,y;
  cin>>x>>y;
  if(x<y)
    cout<<"NO\n";
  else if (x>y)
  {
      if((x-y)>1)
      {
        cout<<"YES\n";
      }
      else
      {
          cout<<"NO\n";
      }


  }
  else{
    cout<<"NO\n";
  }
  }
  return 0;
}

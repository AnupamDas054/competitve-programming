#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    string s;
    cin>>s;
  //  printf("%s",s);
  long long int sum=0;

  for(int i=0;i<n;i++)
  {

    //  cout<<s[i]<<endl;

      int k= (s[i]-'0');

      if(k%2==0)
      {
          sum+=i+1;
      }
  }
  printf("%d",sum);


    return 0;
}

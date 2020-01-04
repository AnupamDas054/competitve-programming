#include<bits/stdc++.h>

using namespace std;

int main(){

string s;
cin>>s;
int s1=s.size();
int k=0;
int flag=1;
string s2;
if(s1%2==0)
{
    int i=s1-1,j=0;
    while(1)
    {
        if(flag==1)
        {
            s2=s2+s[i];
            i--;
            flag=2;
            k++;
            if(k==s1)
            {
                for(int j1=s1-1;j1>=0;j1--)
                    cout<<s2[j1];
                cout<<endl;
                return 0;
            }

        }
        if(flag==2)
        {
            s2=s2+s[j];
            flag=1;
            j=j+1;
            k++;
            if(k==s1)
            {
                for(int j1=s1-1;j1>=0;j1--)
                    cout<<s2[j1];
                cout<<endl;
                return 0;
            }
        }
    }
}
else{
    int i=s1-1,j=0;
    while(1)
    {
        if(flag==2)
        {
            s2=s2+s[i];
            i--;
            flag=1;
            k++;
            if(k==s1)
            {
                for(int j1=s1-1;j1>=0;j1--)
                    cout<<s2[j1];
                cout<<endl;
                return 0;
            }
        }
        if(flag==1)
        {
            s2=s2+s[j];
            flag=2;
            j=j+1;
            k++;
            if(k==s1)
            {
                for(int j1=s1-1;j1>=0;j1--)
                    cout<<s2[j1];
                cout<<endl;
                return 0;
            }
        }
    }


}
return 0;
}

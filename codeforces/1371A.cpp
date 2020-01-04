 #include<bits/stdc++.h>
using namespace std;

int main()
{

    long long int a,b;
    cin>>a>>b;
    int cnt=0;
    while(1)
    {
        if(a<b)
            swap(a,b);
        if(a==b)
        {
            cout<< cnt <<endl;
            return 0;
        }
        else if(a%5==0)
        {
            long long x=(a/5)*4;
            a=a-x;
            if(b%5==0)
            {
                while(b%5==0){
                long long x1=(b/5)*4;
                b=b-x1;
                }
            }
            else if(b%3==0)
            {
                while(b%3==0){
                long long x1=(b/3)*2;
                b=b-x1;
                }
            }
            else if(b%2==0){
                while(b%2==0){
                b=b/2;
                }
            }
            cout<<a<<" "<<b<<endl;
            cnt++;
        }
         else if(a%3==0)
        {
            long long x=(a/3)*(2);
            a=a-x;
            if(b%5==0)
            {
                while(b%5==0){
                long long x1=(b/5)*4;
                b=b-x1;
                }
            }
            else if(b%3==0)
            {
                while(b%3==0){
                long long x1=(b/3)*2;
                b=b-x1;
                }
            }
            else if(b%2==0){
                while(b%2==0){
                b=b/2;
                }
            }
            cnt++;
            cout<<a<<" "<<b<<endl;
        }
        else if(a%2==0)
        {
            a=a/2;
            cnt++;
            if(b%5==0)
            {
                while(b%5==0){
                long long x1=(b/5)*4;
                b=b-x1;
                }
            }
            else if(b%3==0)
            {
                while(b%3==0){
                long long x1=(b/3)*2;
                b=b-x1;
                }
            }
            else if(b%2==0){
                while(b%2==0){
                b=b/2;
                }
            }
        cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<a<<" "<<b<<endl;
            cout<<"-1"<<endl;
            return 0;
        }
    }
    return 0;
}

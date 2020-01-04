#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;
    long long m=0;
    if(w2<w1)
    {
        m=(w1-w2);
        cout<<(w1+2)+(h1+h2+1)+w2+m+h1+1+h2<<endl;

    }
    else
    cout<<(w1+2)*2+(h1+h2)*2<<endl;


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
            int sign=0;
    ll s,second=0,minute=0,hour=0,day=0,month=0,year=0;
    cin>>s;
     minute=s/60;
     second=s%60;
    if(minute>=60){
    hour=minute/60;
    minute=minute%60;
    }
    if(hour>=24){
     day=hour/24;
     hour=hour%24;
    }
    if(day>=30){
     month=day/30;
     day=day%30;
    }
    if(month>=12){
     year=month/12;
    month=month%12;
    }
    if(year>0)
    {
        if(sign==0)
        {
            cout<<"Case "<<i<<": ";
            sign=1;
        }
        if(year==1)
        {
            cout<<1<<" "<<"year ";
        }
        else
        {
            cout<<year<<" "<<"years ";
        }

    }
    if(month>0)
    {
        if(sign==0)
        {
            cout<<"Case "<<i<<": ";
            sign=1;
        }
        if(month==1)
        {
            cout<<1<<" "<<"month ";
        }
        else
        {
            cout<<month<<" "<<"months ";
        }

    }
    if(day>0)
    {
        if(sign==0)
        {
            cout<<"Case "<<i<<": ";
            sign=1;
        }
        if(day==1)
        {
            cout<<1<<" "<<"day ";
        }
        else
        {
            cout<<day<<" "<<"days ";
        }

    }
    if(hour>0)
    {
        if(sign==0)
        {
            cout<<"Case "<<i<<": ";
            sign=1;
        }
        if(hour==1)
        {
            cout<<1<<" "<<"hour ";
        }
        else
        {
            cout<<hour<<" "<<"hours ";
        }

    }
    if(minute>0)
    {
        if(sign==0)
        {
            cout<<"Case "<<i<<": ";
            sign=1;
        }
        if(minute==1)
        {
            cout<<1<<" "<<"minute ";
        }
        else
        {
            cout<<minute<<" "<<"minutes ";
        }

    }
    if(second>0)
    {
        if(sign==0)
        {
            cout<<"Case "<<i<<": ";
            sign=1;
        }
        if(second==1)
        {
            cout<<1<<" "<<"second ";
        }
        else
        {
            cout<<second<<" "<<"seconds ";
        }

    }
    cout<<endl;
    }
    return 0;
}

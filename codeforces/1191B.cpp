#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s[12];
    vector<int>s1,s2,s3;
    for(int i=0;i<3;i++)
    {
        cin>>s[i];
        if(s[i][1]=='m')
        {

            s1.push_back(s[i][0]-'0');
        }
        if(s[i][1]=='s')
        {

           s2.push_back(s[i][0]-'0');
        }
        if(s[i][1]=='p')
        {

            s3.push_back(s[i][0]-'0');
        }
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
    int k1=s1.size();int k2=s2.size();int k3=s3.size();
    int rem=0,rem2=0,rem3=0;
//    cout<<k1<<endl;
//    cout<<k2<<endl;
//    cout<<k3<<endl;
    if(k1==1)
    {
        rem=1;
    }
    else if(k1==2)
    {
        if(s1[1]-s1[0]==1 || s1[1]-s1[0]==0 || s1[1]-s1[0]==2)
        {
            rem=2;
        }
        else
        {
            rem=1;
        }
    }
    else if(k1==3)
    {
        if(s1[1]-s1[0]==1 || s1[1]-s1[0]==0)
        {
            rem=2;
            if(s1[1]-s1[0]==1)
            {
                if(s1[2]-s1[1]==1 )
            {
            rem++;
            }
            }
            if(s1[1]-s1[0]==0)
            {
                if( s1[2]-s1[1]==0)
            {
            rem++;
            }
            }

        }
        else if(s1[2]-s1[1]==1 || s1[2]-s1[1]==0 || s1[2]-s1[0]==1 || s1[2]-s1[0]==0 || s1[2]-s1[0]==2 || s1[2]-s1[1]==2 || s1[1]-s1[0]==2)
        {
            rem=2;
        }
        else {
            rem=1;
        }

    }
//    for(int i=0;i<3;i++)
//        cout<<s2[i]<<endl;

    if(k2==1)
    {
        rem2=1;
    }
    else if(k2==2)
    {
        if(s2[1]-s2[0]==1 || s2[1]-s2[0]==0 || s2[1]-s2[0]==2)
        {
            rem2=2;
        }
        else
        {
            rem2=1;
        }
    }
    else if(k2==3)
    {
        if(s2[1]-s2[0]==1 || s2[1]-s2[0]==0)
        {
            rem2=2;
            if(s2[1]-s2[0]==1)
            {
                if(s2[2]-s2[1]==1)
            {
            rem2++;
            }
            }
            if(s2[1]-s2[0]==0)
            {
                if( s2[2]-s2[1]==0)
            {
            rem2++;
            }
            }

        }
         else if(s2[2]-s2[1]==1 || s2[2]-s2[1]==0 || s2[2]-s2[0]==1 || s2[2]-s2[0]==0 || s2[2]-s2[0]==2 || s2[2]-s2[1]==2 || s2[1]-s2[0]==2)
        {
            rem2=2;
        }
        else{
            rem2=1;
        }

    }


    if(k3==1)
    {
        rem3=1;
    }
    else if(k3==2)
    {
        if(s3[1]-s3[0]==1 || s3[1]-s3[0]==0 || s3[1]-s3[0]==2)
        {
            rem3=2;
        }
        else
        {

            rem3=1;
        }
    }
    else if(k3==3)
    {

        if(s3[1]-s3[0]==1 || s3[1]-s3[0]==0 )
        {
            rem3=2;
            if(s3[1]-s3[0]==1)
            {
            if(s3[2]-s3[1]==1)
            {
            rem3++;
            }
            }
            if(s3[1]-s3[0]==0)
            {
                if( s3[2]-s3[1]==0)
            {
            rem3++;
            }
            }

        }
        else if(s3[2]-s3[1]==1 || s3[2]-s3[1]==0 || s3[2]-s3[0]==1 || s3[2]-s3[0]==0 ||s3[2]-s3[1]==2 || s3[2]-s3[0]==2 || s3[1]-s3[0]==2)
        {
            rem3=2;
        }
        else
        {
            rem3=1;
        }

    }
    //cout<<rem<<" "<<rem2<<" "<<rem3<<endl;

    int max1=max(rem,max(rem2,rem3));
    cout<<3-max1<<endl;


}

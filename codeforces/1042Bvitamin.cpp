#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<string , int>m;
    map<string ,int> :: iterator it;
    set<string>s1;
    int m1;
    cin>>m1;
    for(int i=0;i<m1;i++)
    {
        string s;int k;
        cin>>k>>s;
        int k1=s.size();
        if(k1==1)
        {
          if(s1.find(s)==s1.end())
          {
              m[s]=k;
              s1.insert(s);
          }
          else if(m[s]>k)
          {
              m[s]=k;
          }
        }
        else if(k1==2)
        {

            if(s=="AB" || s=="BA")
            {
                string s3="k1";
                if(s1.find(s3)==s1.end())
                {
                    m[s3]=k;
                    s1.insert(s3);
                }
                else
                {
                    if(m[s3]>k )
                    {
                        m[s3]=k;
                    }
                }
            }
            else if(s=="AC" || s=="CA")
            {
                string s4="k2";
                if(s1.find(s4)==s1.end())
                {
                    m[s4]=k;
                    s1.insert(s4);
                }
                else
                {
                    if(m[s4]>k )
                    {
                        m[s4]=k;
                    }
                }
            }
            else if(s=="CB" || s=="BC")
            {
                string s5="k3";
                if(s1.find(s5)==s1.end())
                {
                    m[s5]=k;
                    s1.insert(s5);
                }
                else
                {
                    if(m[s5]>k )
                    {
                        m[s5]=k;
                    }
                }
            }

        }
        else if(k1==3)
        {
            string s2="n";
                if(s1.find(s2)==s1.end())
                {
                    m[s2]=k;
                    s1.insert(s2);
                }
                else
                {
                    if(m[s2]>k)
                    {
                        m[s2]=k;
                    }
                }

        }
    }
/*cout<<m.size();
for(it=m.begin();it!=m.end();it++)
{
    cout<<it->first<<" "<<it->second<<endl;
}*/
int arr[9]={0};
if(s1.find("A")!=s1.end())
{
    arr[0]=arr[0]+m["A"];
    if(s1.find("B")!=s1.end())
    {
        arr[0]=arr[0]+m["B"];
        if(s1.find("C")!=s1.end())
        {
            arr[0]=arr[0]+m["C"];
        }
        else
            arr[0]=0;
    }
    else
    {
        arr[0]=0;
    }
    //cout<<arr[0]<<endl;
}
if(s1.find("A")!=s1.end())
{
    arr[1]=arr[1]+m["A"];
    if(s1.find("k3")!=s1.end())
    {
        arr[1]=arr[1]+m["k3"];

    }
    else
        arr[1]=0;
      //  cout<<arr[1]<<endl;
}
if(s1.find("B")!=s1.end())
{
    arr[2]=arr[2]+m["B"];
    if(s1.find("k2")!=s1.end())
    {
        arr[2]=arr[2]+m["k2"];

    }
    else
        arr[2]=0;
    //cout<<arr[2]<<endl;
}

if(s1.find("C")!=s1.end())
{
    arr[3]=arr[3]+m["C"];
    if(s1.find("k1")!= s1.end())
    {
        arr[3]=arr[3]+m["k1"];

    }
    else
        arr[3]=0;
  //      cout<<arr[3]<<endl;
}

if(s1.find("n")!=s1.end()){
arr[4]=m["n"];
//cout<<arr[4]<<endl;
}
if(s1.find("k1")!=s1.end())
{
    arr[5]=arr[5]+m["k1"];
    if(s1.find("k2")!=s1.end())
    {
        arr[5]=arr[5]+m["k2"];

    }
    else
        arr[5]=0;
    //cout<<arr[2]<<endl;
}
if(s1.find("k1")!=s1.end())
{
    arr[6]=arr[6]+m["k1"];
    if(s1.find("k3")!=s1.end())
    {
        arr[6]=arr[6]+m["k3"];

    }
    else
        arr[6]=0;
    //cout<<arr[2]<<endl;
}
if(s1.find("k3")!=s1.end())
{
    arr[7]=arr[7]+m["k3"];
    if(s1.find("k2")!=s1.end())
    {
        arr[7]=arr[7]+m["k2"];

    }
    else
        arr[7]=0;
    //cout<<arr[2]<<endl;
}
int min1=INT_MAX;
vector<int>v;
int sign=0;
for(int i=0;i<8;i++)
{
    if(arr[i]>0)
    {
        sign=1;
        v.push_back(arr[i]);
    }
}
for(int i=0;i<v.size();i++)
{
   // cout<<arr[i]<<endl;
    if(min1>v[i])
    {
        min1=v[i];
    }
}
if(sign==1)
cout<<min1<<endl;
else
    cout<<-1<<endl;


}

#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<map>
#include<stdio.h>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) return 0;
        map<vector<int> , int >m;
          map<vector<int> , int > :: iterator it;
        int m2=0;
        int m3=n;
        while(n--)
        {
            vector<int>v;
            int k1;
            for(int i=0;i<5;i++)
            {
                scanf("%d",&k1);
                v.push_back(k1);
            }
            sort(v.begin(),v.end());
            m[v]++;
            if(m[v]>m2)
            {
                m2=m[v];
            }

        }
            int c=0;
            for( it=m.begin();it!=m.end();it++)
            {
                if(it->second==m2)
                    c+=m2;
            }
            cout<<c<<endl;


    }


    return 0;
}

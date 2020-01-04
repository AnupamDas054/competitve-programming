#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
typedef pair<int,int> pii;
#define RESET(ara, b) memset(ara, b, sizeof(ara))

int main()
{
    int T, n;
    cin>>T;

    for(int t = 1; t <= T; t++){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;

        string ans;
        for(int i = 0; i < k-1; i++){
            ans += '(';
            ans += ')';
        }

        int baki = n/2 - (k-1);
        for(int i = 1; i <= baki; i++){
            ans += '(';
        }
        for(int i = 1; i <= baki; i++){
            ans += ')';
        }
        cout<<ans<<endl;

        vector < pii > answer;
        for(int i = 0; i < str.size(); i++){
            if(str[i] != ans[i]){
                for(int j = i+1; j < str.size(); j++){
                    if(str[j] == ans[i]){
                        answer.push_back(pii(i+1, j+1));
                        str[j] = str[i];
                        break;
                    }
                }
            }
        }
        cout<<answer.size()<<endl;

        for(int i = 0; i < answer.size(); i++){
            cout<<answer[i].f<<' '<<answer[i].s<<endl;
        }
    }
}

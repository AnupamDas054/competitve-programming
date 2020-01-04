#include <bits/stdc++.h>

using namespace std;
int main() {

    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
            string A,B;
            cin>>A>>B;
        int l = 0;
        for (int i1 = 0; i1<A.size(); i1++) {
            for (int j = 0; j<B.size(); j++) {
                if (A[i1] == B[j]) {
                    l = 1;
                    break;
                }
            }
            if (l==1) {
                break;
            }
        }
        if(l==1)
        {
            cout<<"Yes\n";
        }
        else
            cout<<"No\n";
    }
}

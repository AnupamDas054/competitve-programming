#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {

	int n, d;
	cin >> n >> d;
	vector< pair<int, int> >v;
	for (int i = 0; i < n; i++) {
		int x,y;
		cin >> x>> y;
		v.push_back(make_pair(x,y));


	sort(v.begin(), v.end());

	for (int i = 0,j=0; i < n; i++) {

		while (j < n&&v[j].first - v[i].first < d) {
			temp += v[j].second; j++;
		}
		ans = max(ans, temp);
		temp -= v[i].second;
	}
	cout << ans;
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

#define watch(x) cout << #x << " = " << x << "\n"
#define M 1000000007
#define ins insert 
#define pb push_back
#define eb emplace_back
#define endl "\n"
typedef long long ll;
typedef double db;
typedef long double ld;
typedef string str;

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int len = (n % 2 == 0) ? (n - 1)/2 : n/2;
	vector<char> v;
	int i = 0, j = n - 1;
	for(i = 0; i <= len; ++i){
		if(s[i] == '0')	v.insert(v.begin(), s[i]);
		else v.emplace_back(s[i]);

		if(j > len){
			if(s[j] == '1')	v.insert(v.begin(), s[j]);
			else	v.emplace_back(s[j]);
			j--;
		}
	}
	for(auto x : v)
		cout << x;
	cout << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("E:/CP/input.txt", "r", stdin);
    freopen("E:/CP/output.txt", "w", stdout);
	#endif // ONLINE_JUDGE

	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
	cerr << "time taken : " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
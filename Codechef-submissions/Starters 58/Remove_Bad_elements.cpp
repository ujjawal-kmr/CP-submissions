
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
	int n, x;
	cin >> n;
	multiset<int>s;
	set<int> s1;
	for(int i = 0; i != n; ++i){
		cin >> x;
		s.insert(x);
		s1.insert(x);
	}
	int max_ct = 1;
	for(auto it = s1.begin(); it != s1.end(); ++it){
		int ele = s.count(*it);
		max_ct = max(max_ct, ele);
	}
	auto ans = n - max_ct;
	cout << ans << endl;
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
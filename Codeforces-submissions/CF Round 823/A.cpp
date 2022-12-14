
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
	int n, c, x;
	cin >> n >> c;
	set<int> s;
	multiset<int> s1;
	for(int i = 0; i != n; ++i){
		cin >> x;
		s.insert(x);
		s1.insert(x);
	}
	int cost = 0;
	for(set<int>::iterator it = s.begin(); it != s.end(); ++it){
		int ct = s1.count(*it);
		cost += (c < ct) ? c : ct;
	}
	cout << cost << endl;
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
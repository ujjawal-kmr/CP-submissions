
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
	string s, rev_s;
	cin >> s;
	int ans = n;
	for(int i = 0; i != n; ++i){
		if(s[i] == '0')	{ans = i; break;}
	}
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
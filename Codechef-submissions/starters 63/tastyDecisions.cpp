
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

bool solve(){
	int n;
	// cin >> n;
	string s;
	cin >> s;
	n = s.size();
	for(int i = 0; i < n; ++i){
		if(s[i] == '1'){
			if(s[i] != s[i + 1] || i+1 == n)	return false;
			i++;
		}
	}
	return true;
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
		bool ans = solve();
		if(ans)	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	cerr << "time taken : " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
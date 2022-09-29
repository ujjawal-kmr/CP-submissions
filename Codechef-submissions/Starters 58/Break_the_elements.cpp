
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
	ll n, x, ev = 0, odd = 0;
	cin >> n;
	for(ll i = 0; i != n; ++i){
		cin >> x;
		if(x % 2 == 0)	ev++;
	}
	odd = n - ev;
	ll ans = ev;
	if(odd == n || ev == n)	ans = 0;
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
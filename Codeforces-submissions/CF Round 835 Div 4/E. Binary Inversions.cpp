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
	ll n; 
	cin >> n;
	vector<ll>v(n);
	ll inv = 0, z = 0, o = 0;
	for(int i = 0; i < n; ++i){
		cin >> v[i];
		if(v[i])
			o++;
		else{
			inv += o;	
			z++;
		} 
	}
	ll inc = 0, zbf = 0, obf = 0;
	for(int i = 0; i < n; ++i){
		if(v[i]){
			// if i am changing 1 to 0 then new inversinon will be
			// new_inv = inv + ones before - zero after(zeros - zeros before).
			inc = max(inc, obf - (z - zbf));
			obf++;
		}else{
			zbf++;
			inc = max(inc, (z - zbf) - obf);
		}
	}
	cout << inc + inv << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("E:/CP/input.txt", "r", stdin);
    freopen("E:/CP/output.txt", "w", stdout);
	#endif // ONLINE_JUDGE

	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt = 1;
	cin >> tt;
	while(tt--){
		solve();
	}
	cerr << "time taken : " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
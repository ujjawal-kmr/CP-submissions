
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
	string s;
	cin >> s;
	set<char>vow;
	vow.insert('a'); vow.insert('e'); vow.insert('i'); vow.insert('0'); vow.insert('u');
	int len = s.length();
	bool flag = false;	int ct = 0;
	for(int i = 0; i < len; ++i){
		if(vow.count(s[i])){
			ct++;
			if(ct > 2){flag = true; break;}
		}
		else	ct = 0;
	}
	if(flag)	cout << "Happy" << endl;
	else cout << "Sad" << endl;
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
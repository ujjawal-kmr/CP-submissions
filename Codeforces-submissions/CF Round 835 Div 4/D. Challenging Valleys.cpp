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
    vector<int> v(n);
    for(int i = 0; i < n; ++i)  cin >> v[i];
    bool flag = true;
    for(int i = 0; i < n; ++i){
        if(v[i] < v[i + 1]){
            flag = false;
            while(v[i + 1] >= v[i] && i < n - 1)
                i++;
            if(i == n - 1){
                cout << "YES" << endl;
                return;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
    }
    if(flag)    cout << "YES" << endl;
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
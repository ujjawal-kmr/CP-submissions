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
    int n, x, max2, max; 
    cin >> n;
    vector<int> v;
    vector<int> v1;
    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
        v1.push_back(x);
    }
    sort(v1.begin(), v1.end());
    max = v1[n-1];
    max2 = v1[n - 2];
    for(int i = 0; i < n; ++i){
        if(v[i] == max)     cout << v[i] - max2 << " ";
        else cout << v[i] - max << " ";
    }
    cout << endl;
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
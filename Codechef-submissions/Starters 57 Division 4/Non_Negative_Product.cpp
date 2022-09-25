
#include<bits/stdc++.h>
using namespace std;

#define watch(x) cout << #x << " = " << x << "\n"
#define M 1000000007
#define ins insert 
#define pb push_back
#define eb emplace_back
#define el "\n"
typedef long long ll;
typedef double db;
typedef long double ld;
typedef string str;

void solve(){
    int n, no_negatives = 0, no_zeros = 0;
    cin >> n;
    int v[n];
    for(int i = 0; i != n; ++i){
        cin >> v[i];
        if(v[i] < 0)    no_negatives++;
        if(v[i] == 0)   no_zeros++;
    }
    if((no_negatives % 2 == 0) || no_zeros) cout << 0 << el;
    else    cout << 1 << el;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
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
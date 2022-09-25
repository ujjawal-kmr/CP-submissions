
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
    int n; // size of str.
    cin >> n;
    string s;
    cin >> s;
    
    int no_zeros = 0, no_ones = 0;
    for(int i = 0; i != n; ++i)
        (s[i] == '0') ? no_zeros++ : no_ones++;
        
    if(n <= 2)   cout << s;
    else{
        for(int i = 0; i != no_zeros; ++i)  cout << 0;
        for(int i = 0; i != no_ones; ++i)   cout << 1;
    }
    cout << el;
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

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
    int n;
    cin >> n;
    if(n < 4){ cout << -1;}
    else if(n == 4){cout << "3 1 4 2";}
    else if(n % 2 == 0){
        int val = 1;
        int a = (n/2);
        int b = a - 1;
        for(int i = 1; i <= n; ++i){
            cout << val << " ";
            if(i % 2 != 0)  val += a;
            else val -= b;
        }
    }

    else{
        int val = 1;
        int a = (n/2) + 1;
        int b = a - 1;
        for(int i = 1; i <= n; ++i){
            cout << val << " ";
            if(i % 2 != 0)  val += a;
            else val -= b;
        }
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
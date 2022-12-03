Please like & subscribe. If you have any doubts in these problems, kindly ask in comment.size

:::::::::::::::::::::::::   Codes :::::::::::::::::::::::::::

:::::::::::::   Tour of King    ::::::::::::::

void solve(){
    int a, b;
    cin >> a >> b;
    long long ans = (a * 5) + (b * 7);
    cout << ans << endl;
}

::::::::::::    Minimum Number of Ones  :::::::::::::

void solve(){
    int n;
    cin >> n;
    cout << n/2 << endl;
}

::::::::::::    Counting Problem    ::::::::::::::::

void solve(){
    int n, x, odd = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        if(x & 1)
            odd++;
    }
    cout << ((odd && !(odd & 1)) ? "YES" : "NO") << endl;
}

::::::::::::    Expensive Steps     ::::::::::::::

void solve(){
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    
    // if points are outside grid.
    if( (a < 1 || a > n || b < 1 || b > n) && ( c < 1 || c > n || d < 1 || d > n) ){
        cout << 0 << endl;
        return;
    }
    int xecp = min(min(a, abs(n - a + 1)), min(b, abs(n - b + 1)));
    int yecp = min(min(c, abs(n - c + 1)), min(d, abs(n - d + 1)));
    int costecp = xecp + yecp;
    int cost = abs(a - c) + abs(b - d); // travel inside grid
    cout << min(cost, costecp) << endl;
}

:::::::::::::::     Maximum Angriness   ::::::::::::::

void solve(){
    long long n, k;
    cin >> n >> k;
    // max combinations nC2
    long long maxval = ((n * (n - 1)) / 2);
    long long ans = maxval;
    // removing extra combinations. 
    if(k < n/2){
        long long extra = n - (2 * k);
        long long extCom = (extra * (extra - 1)) / 2; // extra combinations
        ans = maxval - extCom;
    }
    cout << ans << endl;
}

If you have reached here then why you have not yet liked and subscribed.
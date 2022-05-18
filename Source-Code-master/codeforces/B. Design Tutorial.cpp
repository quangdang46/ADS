//
// Code By CodeWar :3
#include <bits/stdc++.h>
#define pb push_back;
typedef long long i64;
typedef long i32;
const int mod = 1e9+7;
const int nMax = 1e6+5;
using namespace std;
int n,k;
int a[100004];
void input(){
    cin >> n >> k;
    for(int i = 0; i < n ; i++)
        cin >> a[i];
}

void solve(){
    sort(a,a+n);
    int res = 0;
    for(int i = n - 1 ; i >= 0 ; i -= k){
        res += (a[i] - 1) * 2;
    }
    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; //cin >> t;
    while(t--){
        input();
        solve();
    }
    return 0;
}

// Code By CodeWar :3
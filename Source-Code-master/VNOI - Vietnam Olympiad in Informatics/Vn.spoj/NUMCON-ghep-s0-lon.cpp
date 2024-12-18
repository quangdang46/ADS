/**
 *    authur: Bao Trung (Koi` Cute)
 * https://vn.spoj.com/problems/NUMCON/
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define all(x) (x).begin(), (x).end()
#define set_arr(a,n); int a[n+5]; for(int i=0;i<n;i++)cin>>a[i];
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;
const int mod = 1e9+7;
string s[1000];
bool cmp(string s,string x){
    string tmp = s + x;
    x += s;
    return (tmp > x);
}
void solve(){
    int n = 1;
    while(cin >> s[n]) n++;
    sort (s + 1 , s + n + 1,cmp);
    for(int i = 1 ; i <= n; i++)
        cout << s[i];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;// cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3
#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll pwr(ll a, ll n, ll base){
	if (n == 0) return 1;
	if (n == 1) return a;
	if (n%2 == 0){
		ull r = pwr(a, n/2, base) % base;
		return (r * r) % base;
	}
	return (pwr(a, n-1, base) * a) % base;		
}
 
void solve(){
    string a;
    ll b, m, mod=0, ans;
    cin >> a >> b >> m;
    for (int i=0; i<a.size(); i++){
        mod = mod*10 + a[i] -'0';
        mod %= m;
    }
    ans = pwr(mod, b, m) % m;
    cout << ans << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 
#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define inv 1000000005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
 
ll p[1005];
 
ll pwr(ll a, ll n){
	if (n == 0) return 1;
	if (n == 1) return a;
	if (n%2 == 0){
		ull r = pwr(a, n/2) % base;
		return (r * r) % base;
	}
	return (pwr(a, n-1) * a) % base;		
}
 
ll nCk(int n, int k)
{
	if (n == k || k == 0) return 1;
	return (p[n] * pwr((p[k] * p[n-k]) % base, inv)) % base;
}
 
void solve(){
	int n, k;
	ll ans;
	cin >> n >> k;
	ans = nCk(n, k);
	if (ans < 0) ans += base;
	else ans %= base;
	cout << ans << endl;
}
 
int main()
{
	faster();
	int t;
	cin >> t;
	p[0] = 1;
	for (int i = 1; i <= 1000; i++) p[i] = (p[i - 1] * i) % base;
	while (t--) solve();
	return 0;
}
 
 

#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define bas 1000000007
#define N 2005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;


ll add(ll a, ll n, ll base){
	if (a == 0 || n==0) return 0;
	if (n%2 == 0){
		ull r = add(a, n/2, base) % base;
		return (2*r) % base;
	}
	return (add(a, n-1, base) + a % base) % base;		
}
void solve(){
    ll a, b, c, ans;
    cin >> a >> b >> c;
    ans = add(a, b, c) % c;
    cout << ans <<  endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 
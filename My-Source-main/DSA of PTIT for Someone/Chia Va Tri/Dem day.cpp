#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll p = 123456789;

ll Power(ll n, ll k){
	if(k == 0)
		return 1ll;
	ll t = Power(n, (k / 2));
	if(k % 2 == 0)
		return t * t % p;
	return n * (t * t % p) % p; 
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << Power(2, n - 1) << endl;
    }
    return 0;
}

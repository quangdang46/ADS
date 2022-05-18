#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int solve(ll x, ll y, ll p){
	if (y == 0) return 1;
	if (y == 1) return (x%p);
	if (y%2==0){
		ll r=solve(x, y/2, p)%p;
		return r*r%p;
	}
	return (solve(x, y-1, p)*x)%p;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--){
		ll x, y, p;
		cin >> x >> y >> p;
		cout << solve(x, y, p) << endl;
	}
	return 0;
}

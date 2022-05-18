#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

ll gcd(ll a, ll b){
	if (b == 0) return a;
	return (gcd(b, a % b));
}

int main()
{
	faster();
	int n;
	cin >> n;
	while (n--){
		ll a, b, c;
		cin >> a >> b;
		c = gcd(a, b);
		cout << (a*b)/c  << " " << c << endl;
	}
	return 0;
}



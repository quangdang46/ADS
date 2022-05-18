#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N	1000000
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <long long> vi;
typedef vector <string> vs;

vi v;
void prime(){
	bool check[N];
	for (ll i = 2; i <= N; i++)	check[i] = true;
	
	for (ll i = 2; i <= N; i++){
		if (check[i] == true)
			for (ll j = 2 * i; j <= N; j += i)
				check[j] = false;
	}
	
	for (ll i = 2; i <= N; i++)
		if (check[i] ==  true)	v.push_back(i);
}

int main()
{
	faster();
	int t;
	cin >> t;
	prime();
	while (t--){
		ll n, i=0;
		cin >> n;
		while (v[i] * v[i] <= n){
				while (n % v[i] == 0){
					n /= v[i];
				}
			i++;
		}
		if (n > 2) cout << n;
		else cout << v[i-1];
		cout << endl;
	}
	return 0;
}



#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--){
		ll n, k, c=0;
		cin >> n >> k;
		for (int i=1; i<=n; i++){
			c+= i%k;
		}	
		if (c==k) cout << 1;
		else cout << 0;
		cout << endl;
	}
	return 0;
}



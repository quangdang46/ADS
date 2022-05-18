#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N	1000
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int find(int n, int k){
	while (n % 2 == 0){
		k--;
		n >>= 1;
		if (k == 0) return 2;
	}
	
	for (int i = 3; i <= sqrt(n); i += 2){
		while (n % i == 0){
			if (k == 1) return i;
			k--;
			n /= i;
		}
	}
	
	if (n > 2 && k == 1) return n;
	return -1;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--){
		int n, k, c=0;
		cin >> n >> k;
		c =  find(n, k);
		cout << c << endl;
	}
	return 0;
}



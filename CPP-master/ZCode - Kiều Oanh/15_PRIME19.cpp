#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
bool prime(int n){
	if (n < 2) return false;
	for (int i=2; i<=round(sqrt(n)); i++)
		if (n%i==0) return false;
	return true;
}

int main()
{
	faster();
	int a, b;
	cin >> a >> b;
	if (a > b) swap(a, b);
	for (int i=a; i<=b; i++)
		if (prime(i)) cout << i << " ";	
	return 0;
}



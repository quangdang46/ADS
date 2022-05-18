#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <ll> vll;
typedef vector <string> vs;
vll v;
void fibo(){
	ll a=0, b=1, c, i=2;
	v.push_back(0);
	v.push_back(1);
	while (i<=1000){
		c=(a+b)%base;
		a=b%base;
		b=c%base;
		v.push_back(c);
		i++;
	}
}
int main()
{
	faster();
	fibo();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << v[n] << endl;
	}
	return 0;
}



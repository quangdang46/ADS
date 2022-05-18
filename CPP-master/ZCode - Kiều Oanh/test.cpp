#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;

vi v;
void prime(){
	bool check[100000];
	for (int i = 2; i <= 100000; i++)	check[i] = true;
	
	for (int i = 2; i <= 100000; i++){
		if (check[i] == true)
			for (int j = 2 * i; j <= 100000; j += i)
				check[j] = false;
	}
	
	for (int i = 2; i <= 100000; i++)
		if (check[i] ==  true)	v.push_back(i);
}

int main()
{
	faster();
	int t;
	cin >> t;
	prime();
	while (t--){
		int n, i = 0;;
		cin >> n;
		ull lcm = 1;
		while (v[i] <= n){
			ull p = v[i];
			while (p * v[i] <= n) p = p * v[i];
			lcm *= p;
			i++;
		}
		cout << lcm << endl;
	}
	return 0;
}



#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N	100000
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

vi v;
void prime(){
	bool check[N];
	for (int i = 2; i <= N; i++)	check[i] = true;
	
	for (int i = 2; i <= N; i++){
		if (check[i] == true)
			for (int j = 2 * i; j <= N; j += i)
				check[j] = false;
	}
	
	for (int i = 2; i <= N; i++)
		if (check[i] ==  true)	v.push_back(i);
}

int main()
{
	faster();
	int t;
	cin >> t;
	prime();
	while (t--){
		int n, i=0;
		cin >> n;
		while (v[i]<= n){
			cout << v[i] << ",";	
			i++;
		}
		cout << endl;
	}
	return 0;
}



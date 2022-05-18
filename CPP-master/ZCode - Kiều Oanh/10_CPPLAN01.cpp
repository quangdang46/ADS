#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

void solve(){
	string s1, s2;
	int a[1005]={0}, r=0;
	cin >> s1 >> s2;
	int m, n;
	n = s1.size();
	m = s2.size();
	if (m == n){
		for (int i = 0; i < n; i++){
			if (s2[i] != s1[i]){
				if (s2[i] > s1[i]) swap(s1, s2);
				break;
			}	
		}
	}
	else if (n < m){
		while (n < m){
			s1.insert(0, "0");
			n++;
		}
		swap(s1, s2);
	}
	else{
		while (m < n){
			s2.insert(0, "0");
			m++;
		}	
	}

	n = s1.size() - 1;
	for (int i = n; i >= 0; i--){
		if (s1[i] < s2[i] + r){
			a[i] = s1[i] + 10 - r -s2[i];
			r = 1;
		}
		else{
			a[i] = s1[i] - r -s2[i];
			r = 0;
		}
	}
	
	for (int i = 0; i <= n; i++)
		cout << a[i];
	cout << endl;
}
int main()
{
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}



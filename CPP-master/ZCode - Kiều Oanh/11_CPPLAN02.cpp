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
	int maxlen, n;
	maxlen = s1.size();
	if (s2.size() > maxlen) maxlen = s2.size();
	maxlen++;
	while (s1.size() < maxlen) s1.insert(0, "0");
	while (s2.size() < maxlen) s2.insert(0, "0");

	for (int i = maxlen-1; i >= 0; i--){
		int c = s1[i] + s2[i] - 48 * 2 + r;
		if (c > 9){
			a[i] = c - 10;
			r = 1;
		}
		else{
			a[i] = c;
			r = 0;
		}
	}
	if (a[0] != 0) cout << a[0];
	for (int i = 1; i < maxlen; i++) cout << a[i];
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



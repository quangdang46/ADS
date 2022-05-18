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
	while(t--){
		string s;
		int even=0, odd=0;
		cin >> s;
		for (int i=0; i<s.size(); i++){
			if (i%2==0) odd=odd+s[i]-48;
			else even=even+s[i]-48;
		}
		if ((abs(even-odd))%11==0) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}



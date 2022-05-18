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
    string s;
	cin >> s;
    int n=s.size();
	int c=0;
    if (n>1 && s[n-1]=='6' && s[n-2]=='8') c=1;
    cout << c;
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



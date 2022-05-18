#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 100005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;
 
void solve(){
    string s;
    ll m, mod=0;
    cin >> s;
    cin >> m;
    for (int i=0; i<s.size(); i++){
        mod = mod*10 + s[i] - '0';
        mod %= m;
    }
    cout << mod << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 
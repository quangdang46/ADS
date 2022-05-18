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

int a[N], b[N];

ll minL(string s){
    ll x=0;
    for (auto c:s){
        if (c=='6') x=x*10 + 5;
        else x=x*10+c-'0';
    }
    return x;
}

ll maxL(string s){
    ll x=0;
    for (auto c:s){
        if (c=='5') x=x*10 + 6;
        else x=x*10+c-'0';
    }
    return x;
}
void solve(){
    string a, b;
    cin >> a >> b;
    cout << minL(a)+minL(b) << " " << maxL(a)+maxL(b);
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 
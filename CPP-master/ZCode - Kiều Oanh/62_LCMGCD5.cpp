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

int gcd(int a, int b){
    int t;
    while(b != 0){
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}

void solve(){
    int a, x, y, c;
    cin >> a >> x >> y;
    c = gcd(x, y);
    for (int i=0; i<c; i++) cout << a;
    cout << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}


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

ull lcm(ull x, ull y, ull z){
    ull r= ((x*y)/__gcd(x, y));
    return ((r*z)/ __gcd(r, z));
}

void solve(){
    ull x, y, z, n, ans=0;
    cin >> x >> y >> z >> n;
    ull LCM=lcm(x, y, z);
    ull ndigit=pow(10, n-1);
    ull r=ndigit % LCM;
    if (r!=0) ndigit += LCM -r;
    if (ndigit < pow(10, n)) ans = ndigit;
    if (ans!=0) cout << ans;
    else cout << -1;
    cout << endl;
}

int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}


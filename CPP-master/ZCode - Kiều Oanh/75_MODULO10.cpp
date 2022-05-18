#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 2005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[N];
ll b[N];

void solve(){
    int n, x;
    cin >> n >> x;
    for (int i=0; i<n; i++) cin >> a[i];
    b[n-1]=1;
    ll ans = a[n-1];
    for (int i=n-2; i>=0; i--){
        b[i]=(b[i+1]*x)%base;
        ans += a[i]*b[i];
        ans %= base;
    }
    cout << ans <<  endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 
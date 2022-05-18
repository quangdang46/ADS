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

ll a[N];

void solve(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++) cin >> a[i];
    ll old = a[0];
    a[0] = a[0]*a[1];
    for (int i=1; i<n-1; i++){
        ll curr = a[i];
        a[i] = old * a[i+1];
        old = curr;
    }
    a[n-1] = old * a[n-1];
    for (int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;
}
 
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}
 
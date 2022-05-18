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

int a[N], result[N];

void solve(){
    int n;
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    int i=1;
    while (i < n && a[i]==a[i-1]) i++;
    if (i<n) cout << a[0] <<" " << a[i];
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


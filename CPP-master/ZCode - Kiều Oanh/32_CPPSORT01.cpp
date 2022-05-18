#include <bits/stdc++.h>
#define faster() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define base 1000000007
#define N 1005
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector <int> vi;
typedef vector <string> vs;

int a[N], result[N];

void solve(){
    int n, index = -1;
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    for (int i=0, j = n-1; i <= n/2 || j > n/2; i++, j--){
       result[++index] = a[j];
       result[++index] = a[i];
    }
    for (int i=0; i<n; i++) cout << result[i] << " ";
    cout << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}


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
    int n, c=0;
	cin >> n;
	for (int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    for (int i=1; i<n; i++){
        int b= a[i] -a[i-1];
        if (b >1) c += (a[i]-a[i-1]-1);
    }
    cout << c << endl;
}
int main(){
	faster();
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}

